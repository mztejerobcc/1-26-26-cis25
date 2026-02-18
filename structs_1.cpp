#include <iostream>
using namespace std;

struct Student {
    long studentID;
    string name;
    int year;
    double gpa;
};

int main() {
    Student firstStudent;

    firstStudent.studentID = 1234;
    firstStudent.name = "Mailo";
    firstStudent.year = 3;
    firstStudent.gpa = 3.5;

    Student secondStudent;

    secondStudent.studentID = 1234;
    secondStudent.name = "Mailo";
    secondStudent.year = 3;
    secondStudent.gpa = 3.5;

    int size = 2;
    Student studentArray[] = {firstStudent, secondStudent};
    for (int i = 0; i < size; i++) {
        cout << "Student ID: " << studentArray[i].studentID << "\nName: " << studentArray[i].name << "\nYear: " << studentArray[i].year <<"\nGPA: " << studentArray[i].gpa << endl;
        cout << endl;
    }

}