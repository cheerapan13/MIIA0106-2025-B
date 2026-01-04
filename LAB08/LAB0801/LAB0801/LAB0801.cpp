// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าจากผู้ใช้เก็บลง s1
// TODO 3) แสดงผลข้อมูลของ s1

#include <iostream>
#include <string>
using namespace std;

struct Student {
	string id;
	string nickname;
	string lineId;
    string phone;
};

int main() {
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    cout << "Input ID student 1 :";
    cin >> s1.id;
    cout << "Input Nickname 1 :";
    cin >> s1.nickname;
    cout << "Input lineId 1 :";
    cin >> s1.lineId;
    cout << "Input phone 1 :";
    cin >> s1.phone;


    cout << "\n=== Output Student 1 ===\n";
    cout << "ID :" << s1.id << endl;
    cout << "Nickname :" << s1.nickname << endl;
    cout << "lineId :" << s1.lineId << endl;
    cout << "phone :" << s1.phone << endl;

    return 0;
}
