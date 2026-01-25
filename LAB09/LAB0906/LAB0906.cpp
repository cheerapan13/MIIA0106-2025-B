// TODO 1) เติม field ใน class Student: id, nickname
 // TODO 2) ใช้ pointer p ชี้ไปที่ s1 
// TODO 3) กำหนดค่าโดยใช้ p-> 
// TODO 4) แสดงผลโดยใช้ p->
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

};

int main()
{
	Student s1;
	Student* p = nullptr;
	p = &s1;
	p->id = 1;
	p->nickName = "gun";
	p->lineID = "gun";;
	p->phone = "0321654987";;

	cout << "ID      : " << s1.id << endl;
	cout << "Nickname: " << s1.nickName << endl;
	cout << "Line ID : " << s1.lineID << endl;
	cout << "Phone   : " << s1.phone << endl;

	return 0;
}
