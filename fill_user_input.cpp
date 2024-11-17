#include <iostream>

int main(){
    std::string foods[5];//array are static data structures 
    //meaning their size cannot be changed once the program is being run
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;
    
    for(int i = 0; i < size; i++){
        std::cout << "enter a food you like or 'q' to quit #" << i + 1 << ": ";

        //v e r s i o n 2 . 0

        /*std::getline(std::cin, foods[i]);
        if(foods[i] == "q")//but putting q in our foods array to stop the for loop just adds 'q' itself in the food list
        {
            break;
        }*/

       //therefore we will create a seperate variable for the quit feature itself
       std::getline(std::cin, temp);
       if(temp == "q"){
            break;
       }
       else{
            foods[i] = temp;
       }
    }
    
    

    std::cout << "You like the following food:\n";

    //v e r s i o n 3 . 0
    
    //but this will also consider the emplty spaces as the elements of the for loop
    //for(std::string food : foods){
    //    std::cout << food << '\n';
    //}

    //in this for loop we will continue the for loop as long as the element isnt empty
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }


    return 0;
}