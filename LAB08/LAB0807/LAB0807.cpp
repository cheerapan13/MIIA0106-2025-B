#include <iostream>
#include <string>

using namespace std;

struct Parent {
	string name;
	string relationship;
	string phoneContact;
	string homeNumber;
};

struct Phone {
	string mobile;
	string home;
};

struct Student {
	string id;
	string nickName;
	string lineId;
	string myContact;
	string myParent;
	Parent parent;
	Phone phone;
};


int main() {
	Student s1;

	//input

	//	•	ID(id) : 67010001
	//	•	Nickname(nickname) : Karn
	//	•	Line ID(lineId) : gant.dev
	s1.id = "67010001";
	s1.nickName = "Karn";
	s1.lineId = "gant.dev";

	//	•	Mobile Number(mobile) : 081 - 234 - 5678
	//	•	Home Number(home) : 02 - 123 - 4567
	s1.phone.mobile = "081 - 234 - 5678";
	s1.phone.home = "02 - 123 - 4567";

	//	•	Parent's Name (name): Somchai
	//	•	Relationship(relationship) : Father
	s1.parent.name = "Somchai";
	s1.parent.relationship = "Father";

	/*	•	Parent's Mobile Number (mobile): 089-987-6543
		•	Parent's Home Number (home): 02-123-4567*/
	s1.parent.phoneContact = "089-987-6543";
	s1.parent.homeNumber = "02-123-4567";

	cout << "รหัสนักศึกษา    :" << s1.id << endl;
	cout << "ชื่อเล่น         :" << s1.nickName << endl;
	cout << "ไลน์ไอดี        :" << s1.lineId << endl;

	cout << "เบอร์โทรศัพท์    :" << s1.phone.mobile << endl;
	cout << "เบอร์โทรศัพท์บ้าน :" << s1.phone.home << endl;

	cout << "ชื่อคนในครอบครัว :" << s1.parent.name << endl;
	cout << "ความสัพพันธ์    :" << s1.parent.relationship << endl;

	cout << "เบอร์ส่วนตัว     :" << s1.parent.phoneContact << endl;
	cout << "เบอร์บ้าน       :" << s1.parent.homeNumber << endl;



	return 0;
}