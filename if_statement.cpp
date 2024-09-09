#include <iostream>

int main() {
    //if statement = do something if a condition is true
    //               if not, then don't do it

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    //>= is a comparison operator, there are others too, <=, ==
    //sequence of the if else statement does matter in c++,
    //you will get output according to the first true condition in your program
    if(age >= 18){
        std::cout << "welcome to the site!";
    }
    else if(age < 0){
        std::cout << "you haven't been born yet!";
    }
    else if(age >= 100){
        std::cout << "you are too old to enter this site!";
    }
    else{
        std::cout << "you are not old enough to enter!";
    }

    return 0;
}