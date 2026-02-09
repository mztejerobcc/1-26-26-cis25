#include <iostream>

void changeValue(int& num) {
    num = 100;  // Directly modifies the original variable
}

void wontChange(int num) {  // Still gets a copy
    num = 99;
}

int main() {
    int myNumber = 10;
    std::cout << "Original value: " << myNumber << std::endl;

    // No & needed at the call site—the compiler handles it
    changeValue(myNumber);

    std::cout << "Value after function call: " << myNumber << std::endl;

    wontChange(myNumber);
    std::cout << "myNumber is still: " << myNumber << std::endl;
    // Will print 100

    return 0;
}
