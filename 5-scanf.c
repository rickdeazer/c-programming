//HOW TO COLLECT DATA FROM THE USER
#include <stdio.h>

int main() {
    int age;

    printf("Enter you age below please\n");
    scanf("%d", &age);
    printf("Age = %d", age);
    

    //TAKE DOUBLE INPUT
    double number;
    char alphabet;

    printf("\nEnter double input: ");
    scanf("\n%lf", &number);

    printf("Enter character input: ");
    scanf("\n%c", &alphabet);

    printf("\nNumber: %.1lf", number);
    printf("\nAlphabet: %c", alphabet);

    //TAKE MULTIPLE INPUT USING A SINGLE SCANF
    double value1;
    char value2;

    printf("\nEnter input values");
    scanf("\n%lf %c", &value1, &value2);

    printf("\n%lf is value1", value1);
    printf("\n%c is value2", value2);

    //Notice in scan f lines, there are no statements like enter so n so... the line is specifically for the variables and format specifiers.
    return 0;
}