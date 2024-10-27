#include <iostream>

int main(){
    //foreach loop = loop that eases the traversal over an iterable data set
    std::string students[] = {"Bam", "Khun", "Novick"};

    //foreach loop is less flexible than for loops
    for(std::string student : students){//student is the name of the current element we are on we can use any word to determine this though
        std::cout << student << '\n';
    }
    
    char grades[] = {'A', 'B', 'C'};
    
    for(char grade : grades){
        std::cout << grade << '\n';
    }

    return 0;

}