#include <iostream>
using namespace std;

int age_input() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old." << endl;

    return 0;
}

int name_input() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    return 0;
}

int full_name_input() {
    string fullName;

    cout << "Entere your full name: ";
    getline(cin, fullName);

    cout << "Hello, " << fullName << "!" << endl;

    return 0;
}

int main() {
    // age_input();
    // name_input();
    full_name_input();
}