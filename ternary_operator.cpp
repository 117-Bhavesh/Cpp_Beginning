#include <iostream>

int main()
{
    // ternary operator ?: - replacement to an if/else statement
    //condition ? expression1 : expression2;
    //std::cout << (condition ? expresion1 : expression2);

    //int grade = 50;
    //grade >= 60 ? std::cout << "you pass!": std::cout << "you fail!";

    //int number = 10;
    /* number % 2 means number 'modulus' 2 , it gives the remainder of any division */
    //number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    
    bool hungry = true;

    //hungry ? std::cout << "you are hungry" : std::cout << "you are full";
    std::cout << (hungry ? "you are hungry" : "you are full");

    return 0;
}