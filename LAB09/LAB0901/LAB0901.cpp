// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) เขียน method input() รับค่าจากผู้ใช้ 
// TODO 3) เขียน method print() แสดงข้อมูล
#include  <iostream>
#include  <string>

using namespace std;
class Student {
public:
	int id;
	string nickName;
	string lineID;
	string phone;

	void input() {
		cout << "enter your ID : ";
		cin >> id;
		cout << "enter your Nick name : ";
		cin >> nickName;
		cout << "enter your line ID : ";
		cin >> lineID;
		cout << "enter your Phone : ";
		cin >> phone;
	}

	void print() {
		cout << "ID       : " << id << endl;
		cout << "Nck name : " << nickName << endl;
		cout << "Line ID  : " << lineID << endl;
		cout << "Phone    : " << phone << endl;
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();

	cout << "\n=== Output Student 1 ===\n";
	s1.print();

	return 0;
}