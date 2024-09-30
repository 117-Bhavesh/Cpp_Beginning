#include <iostream>

int main(){
/*
    loop(){
        loop(){
             //code input here: a loop inside of another loop
        }
    }
*/
    int rows;
    int columns;
    char symbol;

    std::cout << "how many rows?: ";
    std::cin >> rows;

    std::cout << "how many columns?: ";
    std::cin >> columns;

    std::cout << "enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        //common naming convention for the inner loop is to use j as the counting index
        for(int j = 1; j <= columns; j++){
        std::cout << symbol;
        }
        std::cout << '\n';
        //everytime we will exist the loop we will create a new line character
    }


    return 0;
}