#include <stdio.h>

int main() {    
    //Am making a calculator, collect the operator, first number, second number, then iterate.
    while(1) {
        printf("\nEnter an operator please. [+ - * or /] or enter q to quit ");
        char operator;
        scanf(" %c", &operator);
        //The leading space before %c prevents the code from entering a /n operator automatically and skipping the operator step.
        if (operator == 'q' || operator == 'Q')
        {   
            printf("PRGORAM EXECUTION HAS ENDED");
            break;
        }
        

        printf("\nEnter the first number ");
        double number1;
        scanf("%lf", &number1);

        printf("\nEnter the second number ");
        double number2;
        scanf("%lf", &number2);

        double result;
        switch (operator) {
            case '+':
            result = number1 + number2;
            break;

            case '-':
            result = number1 - number2;
            break;

            case '*':
            result = number1 * number2;
            break;

            case '/':
            result = number1 / number2;
            break;

            default:
            printf("\nInvalid operator entered");
            continue;
        }

        printf("\n%.2lf %c %.2lf = %.2lf", number1, operator, number2, result);
    }

    return 0;
}