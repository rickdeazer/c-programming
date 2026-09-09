//STRUCTURE

//test_condition? expression1 : expression2;

#include <stdio.h>

int main(){

    //EXAMPLE 1:

    int age = 15;
    //int age = 24;
    (age >= 18) ? printf("You can vote") : printf("You cannot vote");

    //EXAMPLE 2:
    char operator = '+';

    int num1 = 5;//whats wrong here 
    int num2 = 9;
    
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("\n%d is the result of %c between, %d and %d", result, operator, num1, num2);

    return 0; 
}
