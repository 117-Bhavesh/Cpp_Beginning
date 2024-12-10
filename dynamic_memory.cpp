#include <iostream>

int main()
{   
    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled and running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory 
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    // initiallized a pointer but didnt give it a value right away
    int *pNum = NULL; 
    // pNum pointer is pointing to a memory address 
    // where we are going to store our int
    pNum = new int;
    
    *pNum = 18;

    // pNum points to a dynamically allocated memory location on the heap.
    std::cout << "address: " << pNum << '\n';
    // &pNum is the memory address of the pointer variable pNum,
    // which is stored on the stack.
    std::cout << "address: " << &pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    // its good practice to use delete operator when we are using new operator
    delete pNum;
    
    return 0;
}