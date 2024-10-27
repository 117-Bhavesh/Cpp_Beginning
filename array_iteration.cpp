#include <iostream>

int main(){
    std::string students[] = {"Bam", "Khun", "Spongebob", "Patrick", "Squodward"};

    std::cout << students[0] << '\n';
    std::cout << students[1] << '\n';
    std::cout << students[2] << '\n';
    std::cout << "----------\n";

    //better way to output all the elements in the array is to use for loop
    for(int i = 0; i < 3; i++){
        std::cout << students[i] << '\n'; //i is our counter variable
    }//but this isnt the best method to print all the elements in aray
    // cause we are having to manually enter the stopping limit in for loop

    //the best method to print all the elements of an array will be 
    //to use sizeof() to automatically determine the total element range in an array

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n'; //i is our counter variable
    }
    

    return 0;
}