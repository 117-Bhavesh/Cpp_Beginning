#include <iostream>

int main(){
    //do while loop: do some block of code first,
    //               THEN repeat again if condition is true

    //program that will ask a user to write a  positive number 
    //this example will show how "do while loop" will be better for this situation
    //first with while loop

    int number;
    while(number<0){
        std::cout << "enter a positive #: ";
        std::cin >> number;
    }
    std::cout << "the # is: " << number;

    //but this won't work
    //we have declared our number, but have not assinged a value yet
    /*if the condition is true we execute this block of code
            std::cout << "enter a positive #: ";
        std::cin >> number;
    */
    //since we have declared an integer variable but have not assigned a value, it is defaulting to 0
    //0 is not less than zero so this condition is false
    //that means we skip the while loop and continue on 

    return 0;
}