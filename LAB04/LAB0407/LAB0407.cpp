// LAB0407.cpp : Adds an isPrime function and demonstrates its use.
//

#include <iostream>
#include <cmath>

//สร้างฟังก์ชันเพื่อตรวจสอบว่าจำนวนใดเป็นจำนวนเฉพาะหรือไม่

// Return true if n is prime, false otherwise.
// Uses trial division up to sqrt(n) and skips even numbers for efficiency.
bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true; // 2 and 3 are prime
    if (n % 2 == 0) return (n == 2) ;

    int limit = static_cast<int>(std::sqrt(static_cast<double>(n)));
    for (int d = 3; d <= limit; d += 2) {
        if (n % d == 0) return false;
    }
    return true;
}

int main()
{
    std::cout << "Enter an integer (or non-number to exit): ";
    int value;
    while (std::cin >> value) {
        if (isPrime(value))
            std::cout << value << " is prime\n";
        else
            std::cout << value << " is not prime\n";

        std::cout << "Enter an integer (or non-number to exit): ";
    }

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
