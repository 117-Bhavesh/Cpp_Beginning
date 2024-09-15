#include <iostream>

int main(){
    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    //the empty method will return if a string is empty or not
    //if string is empty we will return a message
    if(name.empty()){
        std::cout << "you didn't enter your name";
    }
    else{
        std::cout << "hello " << name;
    }

    return 0;
}