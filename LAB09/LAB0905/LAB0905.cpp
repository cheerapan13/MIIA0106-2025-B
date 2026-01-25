#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Student
{
public:
	int id;
	string nickName;
	float height; // meters
	float weight; // kilograms

	void input() {
		cout << "enter your ID : ";
		cin >> id;
		cout << "enter your nick name : ";
		cin >> nickName;
		cout << "enter your height (meters, e.g. 1.75): ";
		cin >> height;
		cout << "enter your weight (kg): ";
		cin >> weight;
	}

	void print() {
		cout << "ID       : " << id << endl;
		cout << "Nickname : " << nickName << endl;
		cout << "Height   : " << fixed << setprecision(2) << height << " m" << endl;
		cout << "Weight   : " << fixed << setprecision(2) << weight << " kg" << endl;
	}

	float calcBMI() const {
		if (height <= 0.0f) return NAN;
		return weight / (height * height); // BMI = kg / (m * m)
	}
};

int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	s1.input();

	cout << "\n=== Student Info ===\n";
	s1.print();

	float bmi = s1.calcBMI();
	if (isnan(bmi)) {
		cout << "BMI : invalid height\n";
	} else {
		cout << "BMI : " << fixed << setprecision(2) << bmi << endl;
	}

	return 0;
}