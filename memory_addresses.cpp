#include <iostream>

int main() {

    //memory address = a location in memory where data is stored
    //a memory address can be accessed with & (address-of operator)
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    //these memory addresses are outputed in form of hexadecimals 
    //which on converting to decimals will give us the ability to 
    //see the difference among each decimal memory values


    return 0;
}