#include <iostream>

int main(){
    //a while loop is much like an if statement except we can repeat some codes potentially and infinite amount of time

    std::string name;
    /*if(name.empty()){
        std::cout << "enter your name: ";
        //to check if user entered their name or not
        std::getline(std::cin, name);
    }*/

    //replacing 'if' funtion with 'while' to execute the true condition poetentially infinite amount of time
    /*while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }*/
    //this will keep executing the program until we enter something
    //there is no way to exit this while loop

    //we do want some way to exit this while loop
    //so we write a condition we won't be able to change at all
    while(1==1){
        std::cout << "HELP I AM STUCK IN AN INFINITE LOOP";
    }
    //use case of while loops: when you have to force a user to do something to proceed further
    std::cout << "hello " << name;
    return 0;
}