#include <iostream>

int searchArray(int array[], int size, int element);
int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//our array
    int size = sizeof(numbers)/sizeof(numbers[0]);//gives size of array
    int index;//index of the value that we are searching for
    int myNum;//myNum will be the number we are looking for

    
    std::cout << "enter element to search for: \n";
    std::cin >> myNum;//taking input of the number we wanna search for
    
    index = searchArray(numbers, size, myNum);//passed the three arguements for the parameters
    //i think the name of the placeholder in parameters doesnt matter but the data type and the sequence does
    //so i think we need to set up parameter and arguement with matching data type and variable sequence

    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }
    else{
    std::cout << myNum << " is not in the array";
    }

    return 0;
}
int searchArray(int array[], int size, int element)//we have set up three parameters
{
    //this is a linear search
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;//in programming -1 serves as a sentinal value, if you see this it means something wasnt found
}