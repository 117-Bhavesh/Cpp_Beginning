#include <iostream>

int main(){
/*
    loop(){
        loop(){
             //code input here: a loop inside of another loop
        }
    }
*/
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
        std::cout << j << ' ';
        }
        std::cout << '\n';
    }


    return 0;
}
