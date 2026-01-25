// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include  <iostream>
#include  <string>

using namespace std;

class Student
{
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

	//void print() {
	//	cout << "ID       : " << id << endl;
	//	cout << "Nick name : " << nickName << endl;
	//	cout << "Line ID  : " << lineID << endl;
	//	cout << "Phone    : " << phone << endl;
	//}
};

void printStudent(Student s)
{
	cout << "ID        : " << s.id << endl;
	cout << "Nick name : " << s.nickName << endl;
	cout << "Line ID   : " << s.lineID << endl;
	cout << "Phone     : " << s.phone << endl;
}

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();

	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);

	return 0;
}