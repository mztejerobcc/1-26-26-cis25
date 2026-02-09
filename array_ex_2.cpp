#include <iostream>
using namespace std;

int myFunction(int myNumber) {
    myNumber = myNumber + 1;
    return myNumber;
}

int myArrayFunction(int myArray[]) {
    myArray[0] = myArray[0] + 1;
    return myArray[0];
}

int main() {
    int myInt = 10;
    int myIntArray[3] = {10, 12, 14};

    cout << myArrayFunction(myIntArray) << endl;
    cout << myIntArray[0] << endl;

    return 0;
}