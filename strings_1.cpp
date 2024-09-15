#include <iostream>

int main(){

    std::string name;

    std::cout << "enter you name: ";
    std::getline(std::cin, name);
    //this is built-in length method of string
    if(name.length() > 12){
        std::cout << "your name can't be over 12 characters";
    }
    else{
        std::cout << "welcome " << name;
    }


    return 0;
}