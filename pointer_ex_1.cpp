#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int *px = &x;

    cout << "The Value of x is: " << x << endl;
    cout << "The Address of x is: " << &x << endl;
    cout << "The Address of pointer to x is: " << px << endl;
    cout << "The Memory Address of pointer to x is: " << &px << endl;
    cout << "The value of the thing pointer to x points to: " << *px << endl;

    return 0;
}