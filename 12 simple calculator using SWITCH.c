#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    double result;
    
    printf("\nEnter the type of operator, * or / or + or - ");
    scanf("%c", &operator);
    printf("Enter the first number ");
    scanf("%lf", &num1);

    printf("\nEnter the second number ");
    scanf("%lf", &num2);


    switch(operator) 
        {
            case '+':
            result = num1 + num2;
            break;

            case '-':
            result = num1 - num2;
            break;

            case '*':
            result = num1 * num2;
            break;

            case '/':
            result = num1 / num2;
            break;
            
            default:
            printf("\nInvalid operator entered");

    }

    (result) ? (printf("\nThe value is: %lf", result)) : (printf("\nNull operation"));
    
    return 0;
}