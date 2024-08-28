#include <iostream>

int main() {
    //any variable that we don't want to be changed (read-only) can be turned into constant
    //common convenstion when using const is to change the letters of the variable to uppercase

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    const int LIGHT_SPEED = 299792458;
    const int  WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circumference << " cm" << "\n";
    std::cout << WIDTH << "x" << HEIGHT << " pixels";


    return 0;
}