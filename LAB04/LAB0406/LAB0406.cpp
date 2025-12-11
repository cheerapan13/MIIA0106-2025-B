// LAB0406.cpp : Simple line-following robot simulation
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <thread>
#include <chrono>

//ระบบควบคุมรถวิ่งตามเส้น(Line Following Robot)


// portable pi constant for C++14
const double PI = std::acos(-1.0);

// Simple 2D line-following simulation.
// The ground line is defined by x = line_x(y). The robot moves mostly along +y
// and tries to keep its x close to line_x(y) using three sensors (left, center, right)
// and a proportional controller.

double line_x(double y)
{
    // example: a sinusoidal line
    const double amplitude = 3.0;
    const double wavelength = 20.0; // larger -> slower oscillation
    return amplitude * std::sin((2.0 * PI / wavelength) * y);
}

int main()
{
    // robot state
    double x = 0.0;       // lateral position
    double y = 0.0;       // longitudinal position
    double heading = 0.0; // radians, 0 => along +y

    // robot parameters
    const double speed = 0.5;           // units per step
    const double sensorForward = 1.0;   // sensors sample ahead by this y offset
    const double sensorSpacing = 0.8;   // lateral spacing between center and side sensors
    const double detectThreshold = 0.6; // how close sensor must be to detect the line

    // controller
    const double Kp = 0.8; // proportional gain

    const int steps = 200;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Line-following simulation (P-controller)\n";
    std::cout << "step\t y\t   x\t   line_x\t err\t steer\n";

    for (int step = 0; step < steps; ++step) {
        // sample sensors at y + sensorForward
        double sampleY = y + sensorForward;
        double lineAtSample = line_x(sampleY);

        double leftSensorX = x - sensorSpacing;
        double centerSensorX = x;
        double rightSensorX = x + sensorSpacing;

        auto detect = [&](double sensorX) {
            return std::abs(sensorX - lineAtSample) <= detectThreshold;
        };

        int left = detect(leftSensorX) ? 1 : 0;
        int center = detect(centerSensorX) ? 1 : 0;
        int right = detect(rightSensorX) ? 1 : 0;

        // Color sensor logic (strict rules):
        // 1) if center sees black -> go straight
        // 2) else if left sees black -> turn left
        // 3) else if right sees black -> turn right
        // If none see the line, use a simple fallback steering toward the line position.
        double error = 0.0; // -1 left, 0 center, +1 right
        if (center) {
            error = 0.0; // straight
        } else if (left) {
            error = -1.0; // turn left
        } else if (right) {
            error = 1.0; // turn right
        } else {
            // fallback: steer toward line position
            double lateralError = lineAtSample - x;
            error = (lateralError > 0.0) ? 0.5 : -0.5;
        }

        double steer = Kp * error; // steering increment in radians

        // update heading and pose
        heading += steer;
        // clamp heading to reasonable range to avoid numerical blowup
        if (heading > PI/2) heading = PI/2;
        if (heading < -PI/2) heading = -PI/2;

        double dx = std::sin(heading) * speed;
        double dy = std::cos(heading) * speed;

        x += dx;
        y += dy;

        // print status
        std::cout << step << "\t " << std::setw(5) << y << "\t " << std::setw(6) << x
                  << "\t " << std::setw(6) << lineAtSample << "\t " << std::setw(4) << error
                  << "\t " << std::setw(6) << steer << '\n';

        // simulate realtime a bit
        std::this_thread::sleep_for(std::chrono::milliseconds(40));
    }

    std::cout << "Simulation finished\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
