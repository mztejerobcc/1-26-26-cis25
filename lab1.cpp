/*

Write a short C++ program that does the following:

Declares an integer variable named points and a string variable named name.
Assigns a number and your name to these variables.
Prints a message to the console that says "Hello, [name]! The computer has seen fit to assign you [points] points.”
You can copy-paste your program into the assignment or upload a file.

Please create a new repository in GitHub with your code and turn in the link to the repository.

*/

#include <iostream>
using namespace std;

int main() {
    int points = 40;
    string name = "Mailo";

    cout << "Hello, " << name << "! the computer has seen fit to assign you " << points << " points." << std::endl;
}

/*

Compile and Execute

g++ -std=c++11 -o lab1 lab1.cpp
./lab1

*/