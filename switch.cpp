#include <iostream>

int main() {
    //switch = alternative to using many "else if" statements 
    //         compare one value against matching cases

    int month;
    std::cout << "enter the month (1-12): ";
    std::cin >> month;

    if(month == 1){
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


    return 0;
}