
#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//    double radius;
//    double result;
//
//    cout << "Enter the radius : ";
//    cin >> radius;
//    
//    result = 3.14 * radius * radius;
//
//    cout << "The area of the cicle is :" << result << endl;
//
//    return 1;
//}

double circleArea(double radius) {
    return  3.14 * radius * radius;
}


double rectAre(double width, double height) {

    double result = width * height;
    return result;
}


int main()
{
    double radius;
    double result;

    cout << "Enter the radius : ";
    cin >> radius;

    result = circleArea(radius);

    cout << "The area of the cicle is :" << result << endl;

    double width, height;
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter heitght : ";
    cin >> height;

     double result2 = rectAre(width, height);

     cout << "result :" << result2 << endl;

    return 1;
}