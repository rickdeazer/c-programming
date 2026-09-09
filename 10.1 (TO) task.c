//Can you create a program to check whether a number is odd or even?
//Use a ternary operator to check if the number is odd or even and print the result.
//If the number is odd, print ("The number is odd")
//IF the number is even print ("The number is even")

//SOLUTION
#include <stdio.h>

int main() {
    
    int number;
    scanf("Enter a number to check if the number is even or odd: %d", &number);

    (number % 2 == 0) ? printf("The number is even") : printf("The number is odd");
    
    return 0;
}