#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    std::string model;
    int year;

    void start() {
        std::cout << brand << " " << model << " is starting!" << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;

    myCar.start();
    return 0;
}
