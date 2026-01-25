// TODO 1) เติม field และ method ใน class Student
 // TODO 2) เขียน swapStudent(Student&, Student&) 
// TODO 3) เขียน sortByID(Student[], size)

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

	void print() {
		cout << "ID       : " << id << endl;
		cout << "Nck name : " << nickName << endl;
		cout << "Line ID  : " << lineID << endl;
		cout << "Phone    : " << phone << endl;
	}
};

void swapStudent(Student& a, Student& b)
{
	Student temp = a;
	a = b;
	b = temp;
}

void sortByID(Student students[], int size)
{
	// Bubble sort: id ascending
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (students[j].id > students[j + 1].id)
			{
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}

void printStudents(Student students[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "----- Student " << (i + 1) << " -----\n";
		students[i].print();
		cout << endl;
	}
}

int main()
{
	const int SIZE = 5;
	Student students[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		students[i].input();
		cout << endl;
	}

	sortByID(students, SIZE);

	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);

	return 0;
}