#include <stdio.h>

//NOTE THIS CODE RESEMBLES THE ONE IN 15.2 ONLY THAT THE CALLED FUNCTION COMES AFTER THE MAIN FUNCITON.

//Generally, every function must be declared before being called, and if not, then we need to have a function prototype.

//EXAMPLE:

int addNumbers(int number1, int number2);
//here we have declared a function prototype for the function: addNumbers at the bottom most of page.

int main() {

    int result = addNumbers(8,9);
    printf("Result = %d", result);

    return 0;
}   

int addNumbers(int number1, int number2){
    int sum = number1 + number2;
    return sum;
}