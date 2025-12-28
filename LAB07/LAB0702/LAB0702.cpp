// TODO: แสดงค่า score, address และ pointer
#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    cout << "Value of score : " << score << endl;
    cout << "Value of * ptr : " << ptr << endl;
    cout << "Value of &score : " << &score << endl;

    return 0;
}
