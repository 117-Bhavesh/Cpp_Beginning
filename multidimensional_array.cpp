#include <iostream>

int main() {
    //creating two dimensional array of car names
    //first set of column represents rows and second columns
    //when initializing a 2d array you may set row size but you do need to set column size
    std::string cars[][3] = {{"Mustang", "Escape", "Endeavour"},
                            {"Huracan", "Urus  ", "Aventador"},
                            {"911-GTR", "Turbo ", "Carrera"}};
    
    /* Manually printing the elements of the matrix

    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << "\n";
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << "\n";
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << "\n";
    */

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    std::cout << rows << std::endl;
    std::cout << columns << std::endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << "    ";
        }
        std::cout << '\n';
    }
    
    return 0;
}