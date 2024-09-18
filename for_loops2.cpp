#include <iostream>

int main(){
    //another example of for loop: counting before HAPPY BNEW YEAR message
/*    for(int i=1; i<=10; i++){
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR\n";
*/ 
    //we can even skip iterations during increament or decrement
    //for(int i=1; i<=10; i+=2)
    //for(int i=10; i>=0; i--) /*countdown*/
        for(int i=10; i>=0; i-=2){
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR\n";
    //for loops are better in situations where you only need to repeat code a certain amount of time


    
    return 0;
}