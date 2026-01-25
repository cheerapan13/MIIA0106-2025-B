// TODO 1) เติม field และ method ใน class Student 
// TODO 2) รับข้อมูลนักศึกษา 5 คน 
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้งหมด
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
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		students[i].input();
		cout << endl;
	}

	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++)
	{
		students[i].print();
		cout << "----------------------\n";
	}

	return 0;
}