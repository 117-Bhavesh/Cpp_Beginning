#include <iostream>

void swap(std::string &x, std::string &y);

int main() {
    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';

    return 0;
}
//pass by reference is better cause it passes the values to the memory address 
//meaning it makes changes to the values at the targeted memory address
//whereas pass by value just swaps the value of the variable and when using it 
//in parameters it just makes copies of the original variable and does not 
//affect the original variable
void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}