//OPERATORS IN C e.g. + , - , * and /
#include <stdio.h>

int main() {
    int x = 12.0;
    double y = 10.55;

    //ADDITION
    int result = x-8;
    printf("%d", result);

    //YOU CAN ALSO DO:
    printf("\n%d", x-8);

    //MULTIPLICATION
    printf("\n%d * %lf give us a value of %lf", x, y, x*y);
    //Note we use %lf to output the result when we multiply and int with a double


    //DIVISION using int
    int result1 = x/8;
    printf("\nThe value of the division is: %d", result1);

                //in this case the code outputs "1" as the value of division. Using int with division operator gives only the quotient.

    //DIVISION using double
    double result2 = x/8.00;
    printf("\nThe value of division 2 is: %.2lf", result2);
                //In this case the code outputs the accurate value 1.50

    //MODULUS OPERATOR
    int result3 = x % 8;
    printf("\nThe modulus of the division of %d and 8.00 is: %d", x, result3);
    //This is commonly known as the remainder of the division.

    //INCREMENT OPERATOR
    printf("\n This is an increment of X: %d", ++x);
    
    //DECREMENT OPERATOR
    printf("\n This is a decrement of Y: %lf", --y);

    //ORDER OF OPERATORS
    int result4 = 4 / 2 + 6 * 5 - 1;
    printf("\n The mixed operations value gives: %d", result4);

    // PRECEDENCE: DIVISION(4/2) => MULTIPLICATION(6*5) => ADDITION(30+2) => SUBTRACTION (32-1)
}