#include <stdio.h>
//EXAMPLE 1:
void calculateSquare(int number){
    int square = number * number;
    printf("Square of %d is %d\n", number, square);

    //incase we need pass take two parameters, we can do: void calculateSquare(int number1, int number2); separation by commas.
}

int main() {
    
    calculateSquare(5);
    //Here, we call the function using calculateSquare() and pass an argument 5, since the function expects an int parameter it shall use as number;

    //To call a function with two arguments, if it expects two parameters, we separate them with commas as in: calculateSquare(5,9);
    return 0;
}

//Parameters are values a function expects, while arguments are values we call a function with.

//NOTE: THE DATA TYPE OF PARAMETERS AND ARGUMENTS MUST BE THE SAME