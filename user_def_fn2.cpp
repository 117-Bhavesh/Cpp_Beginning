#include <iostream>
//programmers declare & define their function after the main function
/*
the issue while doing this is that our programs are read from top to down
since we are invoking the happyBirthday function before even declaring it
the compiler doesn't recognise it
*/
/*
the fix is to declare the function before invoking it and then defining it later 
*/
void happyBirthday(std::string name, int age);//6 we need to add matching set parameters to both declaration and definition
//7 functions can be made aware of any local value or variable by passing them as arguements in parameters 
int main(){

    //function = a block of reusable code

    std::string name = "Yumi";
    int age = 24;
    //separate each arguement with comma,
    happyBirthday(name, age);// making happyBirthday function aware of the name variable within the main function
                        //when you send some data over to a function that data is also known as an arguement
    return 0;
}
//1 functions cannot see what is going on inside of other function 
//2 in order for happyBirthday function to use main function's name variable 
//3 it needs to be made aware of it, to do this when we invoke a neighbouring function 
//4 we can pass that variable or value as an arguement within the parentheses()
void happyBirthday(std::string name, int age)//5 however the receiving function needs a matching set called 'parameters'
{
    std::cout << "happy birthday " << name << '\n';
    std::cout << "happy birthday " << name << '\n';
    std::cout << "happy birthday dear " << name << '\n';
    std::cout << "happy birthday " << name << '\n';
    std::cout << "You are " << age << " years old \n";
}
/* 
summary
if you want to use content of one function in other function
add them as arguement and then pass them as parameters in declaration and definition of that function
*/