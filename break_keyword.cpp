#include <iostream>

int main(){
    //break= break out of a loop (i used this in switch.cpp)
    for(int i=1; i<=20; i++){
        if(i==13){
            break;
        }
        std::cout << i << '\n';
    }
    return 0;
}