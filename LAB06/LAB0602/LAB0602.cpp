#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];

    // วนรับข้อมูล N คน
    for (int i = 0; i < N; ++i)
    {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]); // ใช้ ws เพื่อข้าม whitespace

        cout << "Enter student " << i + 1 << " ID: ";
        cin >> id[i];

        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];

        // คำนวณเกรด
        calculateGrade(score[i], grade[i]);
    }

    // วนแสดงผล N คน
    for (int i = 0; i < N; ++i)
    {
        cout << "\nStudent " << i + 1 << " Information:\n";
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    return 0;
}

