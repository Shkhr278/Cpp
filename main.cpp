#include <iostream>
using namespace std;

int main() {
    int age = 25;
    float price = 9.99;
    char grade = 'A';
    std::string name = "Alice";
    bool isStudent = true;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is Student: " << std::boolalpha << isStudent << std::endl;  // boolalpha prints true/false as text
    return 0;
}
