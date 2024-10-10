#include <iostream>
#include <ctime>
//we need to include this new header file to access to the time function

/*random event generator might be useful in writing game, 
if you want random event to occur like random monster show up or the weather changes*/


int main(){

    srand(time(0)); // (how its read - "srand funtion pass in time pass in 0")
    //this function will use current time as seed to generate random numbers
    int randNum = rand() % 5 + 1; //we will create a local varaible to store our random numbers

    switch(randNum){
        case 1: std::cout << "You win a bumper sticker!\n";
                break;
        case 2: std::cout << "You win a tshirt\n";
                break;
        case 3: std::cout << "you win a free lunch!\n";
                break;
        case 4: std::cout << "you win a gift card!\n";
                break;
        case 5: std::cout << "you win a concert ticket!\n";
                break; //now if you dont add these break statements you will just fall through the switch
                //so if you only want someone to win only one prize you want to exit out the switch by adding these break statements
    }



    return 0;
}