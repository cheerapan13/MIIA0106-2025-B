// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าข้อมูลนักศึกษา 5 คน เก็บลง students[i]
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้ง 5 คน

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
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "Enter ID student :";
        cin >> students[i].id;
        cout << "Enter Nickname   :";
        cin >> students[i].nickname;
        cout << "Enter lineId     :";
        cin >> students[i].lineId;
        cout << "Enter phone      :";
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    cout << "NO.\t" << "Nickname\t" << "Line ID\t" << "Phone\n";
    for (int i = 0; i < SIZE; i++) {
		cout << "Student " << (i + 1) <<"\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
        
    }
    cout << "----------------------\n";
    return 0;
}
