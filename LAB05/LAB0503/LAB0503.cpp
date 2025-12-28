#include <iostream>
#include <string>

using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;
}

int main()
{

    // Demonstrate swap functions
    int a , b;
    cout << "Enter value a : ";
    cin >> a;
	cout << "Enter value b : ";
	cin >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    swapByReference(a, b);

    return 1;
}