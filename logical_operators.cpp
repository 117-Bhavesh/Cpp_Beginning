#include <iostream>

int main(){
    //&& = check if two conditions are true    and logical operator
    //|| = check if at least one of two conditions is true     or logical operator
    //!  = reverses the logical state of the operand, it means if the condition is true it becomes false and if the condition is false it becomes true

    int temp;
    bool sunny = false;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    //in celsius
    /*
    if(temp > 0 && temp < 30){
        std::cout << "the temperature is good!";
    }
    else{
        std::cout << "the temperature is bad!";
    }
    */

    //another way of writing the same program

    
    if(temp <= 0 || temp >= 30){
        std::cout << "the temperature is bad!\n";
    } //in order for us to execute this, only one has to be true
    else{
        std::cout << "the temperature is good!\n";
    }
    

    //if (sunny == true) is same as if (sunny) both means if sunny is true
    if(!sunny){
        std::cout << "it is cloudy outside!";
    }
    else{
        std::cout << "it is sunny outside!";
    }


    return 0;
}