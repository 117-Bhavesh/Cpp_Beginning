#include <iostream>

int main(){

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);
    //IT CLEARS THE name entery 
    name.clear();

    std::cout << "hello " << name; 
    return 0;
}