#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {49.99, 98.90, 43.30, 43};
    int size = sizeof(prices)/sizeof(prices[0]);//created a size variable for the getTotal function to know the size of array
    double total = getTotal(prices, size);//passing size as second arguement
    
    std::cout << "$" << total;

    return 0;
}
//when we pass an array to a function, it decays to what is known as pointer
//within this function we are not working with an array but with a pointer
//so the array wont output the elements
double getTotal(double prices[], int size)//within this function we arent working ith array anymore we are working with a pointer
//this function no longer knows how big the array is
//so we created size variable to tell our function the size of array
{
    double total = 0;
    
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}