#include <iostream>
//1 creating a function to sing happy birthday
//2 currently our program is within main function, to begin the program we call the main function
//3 before the main function we are going to create a new function
void happyBirthday() //4 tip: the function name should be descriptive of what it does
{
    std::cout << "happy birthday to you!\n";
    std::cout << "happy birthday to you!\n";
    std::cout << "happy birthday dear you!\n";
    std::cout << "happy birthday to you!\n\n";
} //7 to invoke this function all we have to do is within the main function 
//8 type the function name and a set of parentheses(;)

//5 the happyBirthday() is almost identical to the main() function
//6 except with the main function we have a return type and return 0
//0 main is also a function
int main()
{ 
    //function= a block of reusable code
    happyBirthday(); //9 this will invoke/call our function
    happyBirthday();
    happyBirthday();//10 this function is reusable means can be called multiple times

    return 0;
}