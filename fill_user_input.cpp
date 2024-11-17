#include <iostream>

int main(){
    std::string foods[5];//array are static data structures 
    //meaning their size cannot be changed once the program is being run
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        std::cout << "enter a food you like #" << i + 1 << ": ";
        std::getline(std::cin, foods[i]);
    }

    std::cout << "You like the following food:\n";

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}