#include <iostream>

int main() {
    int number = 10;
    int* ptr = &number;  // Pointer storing the address of 'number'

    std::cout << "Value: " << number << std::endl;
    std::cout << "Pointer Address: " << ptr << std::endl;
    std::cout << "Pointer Value: " << *ptr << std::endl;  // Dereferencing the pointer
    return 0;
}
