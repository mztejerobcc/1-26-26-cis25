#include <iostream>

void testArrayToPointer(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "address of arr[" << i << "]" <<" " << (arr + i) << std::endl;
        std::cout << "value of arr[" << i << "]" <<" " << *(arr + i) << std::endl;
    }
}

int main() {
    const int SIZE = 3;
    int numbers[SIZE] = {10, 20, 30};

    testArrayToPointer(numbers, SIZE);

    // // Create a pointer and assign the address of the first element to it.
    // int* ptr = &numbers[0];

    // std::cout << "--- Proving the Relationship ---" << std::endl;

    // // Print the address stored in the pointer.
    // std::cout << "Address stored in ptr:         " << ptr << std::endl;

    // // Print the address of the first element directly.
    // std::cout << "Address of the first element:  " << &numbers[0] << std::endl;

    // // Print the value of the array name itself.
    // std::cout << "Value of the array name:     " << numbers << std::endl;

    // std::cout << "\nConclusion: They are all the same address!" << std::endl;

    return 0;
}
