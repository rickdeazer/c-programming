#include <stdio.h>

int addNumbers(int number1, int number2){
    int sum = number1 + number2;
    return sum;
    printf("After the return statement, will this show?");
}
//This addNumbers function does a very simple job by saying: If you call me, pass the arguments I expect as parameters, i.e. number1 and number2, what i'll give back to any caller in return is their two numbers added together.

//The printf() statement after the return does not show
//NOTE: after the return statement, function statement execution ends.
int main() {

    int result = addNumbers(8,9);
    printf("Result = %d", result);

    return 0;
}