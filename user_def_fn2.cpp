#include <iostream>

//1 programmers declare & define their function after the main function
/*
the issue while doing this is that our programs are read from top to down
since we are invoking the happyBirthday function before even declaring it
the compiler doesn't recognise it
*/
/*
the fix is to declare the function before invoking it and then defining it later 
*/
void happyBirthday();

int main(){

    //function = a block of reusable code

    happyBirthday();

    return 0;
}

void happyBirthday(){
    std::cout << "happy birthday to you!\n";
    std::cout << "happy birthday to you!\n";
    std::cout << "happy birthday dear you!\n";
    std::cout << "happy birthday to you!\n\n";
}