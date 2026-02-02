#include <iostream>

int sum(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main () {
    int total = sum(1, 10);
    std::cout << "The sum is: " << total << std::endl; // Prints 15
    return 0;
}