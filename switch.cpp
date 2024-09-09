#include <iostream>

int main() {
    //switch = alternative to using many "else if" statements 
    //         compare one value against matching cases

    int month;
    std::cout << "enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
             std::cout << "it is January";
            break;
        case 2:
            std::cout << "it is February";
            break;
        case 3:
            std::cout << "it is March";
            break;
        case 4:
            std::cout << "it is April";
            break;
        case 5:
             std::cout << "it is May";
            break;
        case 6:
            std::cout << "it is June";
            break;
        case 7:
            std::cout << "it is July";
            break;
        case 8:
            std::cout << "it is August";
            break;
        case 9:
             std::cout << "it is September";
            break;
        case 10:
            std::cout << "it is October";
            break;
        case 11:
            std::cout << "it is November";
            break;
        case 12:
            std::cout << "it is December";
            break;
        default:
            std::cout << "Please enter only numbers (1-12)"; 
    }

/*  if(month == 1){
        std::cout << "it is January";
    }
    else if(month == 2){
        std::cout << "it is February";
    }
    else if(month == 3){
        std::cout << "it is March";
    }
    else if(month == 4){
        std::cout << "it is April";
    }
    else if(month == 5){
        std::cout << "it is May";
    }
    else if(month == 6){
        std::cout << "it is June";
    }
    else if(month == 7){
        std::cout << "it is July";
    }
    else if(month == 8){
        std::cout << "it is August";
    }
    else if(month == 9){
        std::cout << "it is September";
    }
    else if(month == 10){
        std::cout << "it is October";
    }
    else if(month == 11){
        std::cout << "it is November";
    }
    else if(month == 12){
        std::cout << "it is December";
    }
*/


    return 0;
}