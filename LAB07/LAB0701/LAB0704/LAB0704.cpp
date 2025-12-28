// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั้น
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;

    cout << "arr[0] = " << *p  << endl;
    cout << "arr[1] = " << *p + 1 << endl;
    cout << "arr[2] = " << *p + 2 << endl;
    cout << "arr[3] = " << *p + 3 << endl;

    return 0;
}
