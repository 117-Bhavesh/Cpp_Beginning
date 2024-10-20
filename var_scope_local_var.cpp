#include <iostream>
/*
variable scope refers to the region or block of code 
where a variable can be accessed or used.
*/
//local variables = declared inside a fucntion or block {}
//global variables = decalred outside of all fucntions 

//void printNum(int myNum);//putting parameters for the myNum arguement

void printNum();
int main(){

    int myNum = 1;//myNum is a local variable to the main function
    
    //printNum(myNum);//passing myNum as arguement
    printNum();
    return 0;
}
//it is fine to use the same variable name as long as its in the different scope
//void printNum(int myNum){//putting parameters for the myNum arguement
void printNum(){
    int myNum = 2;
    std::cout << myNum;
}
