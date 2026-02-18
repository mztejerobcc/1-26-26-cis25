#include <iostream>
using namespace std;

struct Student {
    long studentID;
    string name;
    int year;
    double gpa;
};

int main() {
    // Create pointer to the heap
    Student * newStudent = new Student;

    // Use pointer dereferrencing to update value
    (*newStudent).studentID = 55123;
    (*newStudent).name = "Frank Miller";

    // Equivalent with easier notation:
    newStudent->studentID = 55123;
    newStudent->name = "Frank Miller";

}