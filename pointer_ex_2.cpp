#include <iostream>

// The parameter is a pointer, designed to hold a memory address.
void changeValue(int* ptr) {
    // To change the original variable, we must dereference the pointer.
    *ptr = 100;
}

void wontChange(int num) {  // Gets a copy
    num = 99;
}

int main() {
    int myNumber = 10;
    std::cout << "Original value: " << myNumber << std::endl;

    // To pass by reference, we pass the memory address of myNumber.
    changeValue(&myNumber);

    std::cout << "Value after function call: " << myNumber << std::endl;

    wontChange(myNumber);
    std::cout << "myNumber is still: " << myNumber << std::endl;
    // Will print 100

    return 0;
}
