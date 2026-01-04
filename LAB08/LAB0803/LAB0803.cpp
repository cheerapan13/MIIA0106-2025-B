
// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) ให้แสดงผลครบทุก field
// TODO 3) ใน main รับข้อมูล 1 คน แล้วเรียก printStudent(s1)

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
    cout << "ID       :" << s1.id << endl;
    cout << "Nickname :" << s1.nickname << endl;
    cout << "lineId   :" << s1.lineId << endl;
    cout << "phone    :" << s1.phone << endl;
}

// TODO: เขียนฟังก์ชันนี้ เพื่อรับข้อมูลนักศึกษา
void inputStudent(Student &s1) {
    cout << "Input ID student :";
    cin >> s1.id;
    cout << "Input Nickname   :";
    cin >> s1.nickname;
    cout << "Input lineId     :";
    cin >> s1.lineId;
    cout << "Input phone      :";
    cin >> s1.phone;

}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    inputStudent(s1);

    cout << "\n=== Output (from function) ===\n";
    printStudent(s1);

    return 0;
}
