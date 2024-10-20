#include <iostream>
/*
Variables declared outside of all functions
 and classes have global scope.
*/
//its best to avoid global variables when you can
//cause they polutes the global namespace
//also variables decalred within a function is more secure
//also a function will prioritize using a local variable first over global variable
int myNum = 3;
void printNum();
int main(){
    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';
    //to bypass the std from using the local version we just need to add :: before the variable
    //:: is called the 'scope resolution operator'
    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n';
}