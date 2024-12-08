#include <iostream>

int main() {

    //memory address = a location in memory where data is stored
    //a memory address can be accessed with & (address-of operator)
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n'; //32bytes of
    std::cout << &age << '\n'; //4bytes of memory
    std::cout << &student << '\n'; //1byte of memory
    //these memory addresses are outputed in form of hexadecimals 
    //which on converting to decimals will give us the ability to 
    //see the difference among each decimal memory values


    return 0;
}