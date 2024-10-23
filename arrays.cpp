#include <iostream>

int main(){
    //array = a data structure that can hold multiple values
    //        values are accessed by an index number
    //        "kind of like a variable that holds multiple values"

    std::string car[] = {"Supra", "Mercedes", "Audi"};
    //arrays can only contain values of same data type

    car[0] = "Mc Laren"; //a value in array can be edited too

    std::cout << car[0] << '\n'; //var name and inside [] put index number
    //0 is the default
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n' << '\n';


    //better way to write array-------------------------------
    //is to declare the array first and then assign the values
    std::string food[5];//but we must define the size of array

    food[0] = "Ice Cream";
    food[1] = "Ice Tea";
    food[2] = "Ice Coffee";
    food[3] = "Chicken Tikka";
    food[4] = "Pani Puri";

    std::cout << food[0] << '\n';
    std::cout << food[1] << '\n';
    std::cout << food[2] << '\n';
    std::cout << food[3] << '\n';
    std::cout << food[4] << '\n';

    int zoom[5];//int data type array
    zoom[0] = 1;
    zoom[1] = 11;
    zoom[2] = 111;
    zoom[3] = 1111;
    zoom[4] = 11111;

    std::cout << zoom[0] << '\n';
    std::cout << zoom[1] << '\n';
    std::cout << zoom[2] << '\n';
    std::cout << zoom[3] << '\n';
    std::cout << zoom[4] << '\n';

    return 0;
}