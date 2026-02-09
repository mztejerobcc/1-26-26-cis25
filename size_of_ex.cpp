#include <iostream>

int main() {
    std::cout << "Size of an int:      " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of an int*:     " << sizeof(int*) << " bytes" << std::endl;
    std::cout << "Size of a double:   " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of a double*:   " << sizeof(double*) << " bytes" << std::endl;
    std::cout << "Size of a char:     " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of a char*:     " << sizeof(char*) << " bytes" << std::endl;
    return 0;
}
