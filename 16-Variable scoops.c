//In this section we'll learn about local and global variable scoops in C programming.

//Variable scoop determines where a variable can be used in code, either in specific functions where it has been declared, or on the whole code.

//EXAMPLES:
#include <stdio.h>
    //GLOBAL VARIABLE
    //here, value has been declared outside of other functions making it globally re-usable.
    int value = 6;
    int addNumbers(int number1, int number2){
    //LOCAL VARIABLE SCOOP EXAMPLE
    int sum = number1 + number2;
    printf("%d is a global variable example\n", value);
    return sum;
    //here, sum has been declared inside this function and therefore trying to call it outside of here will crash the code.
}

int main() {

    int result = addNumbers(8,9);
    printf("Result = %d", result);

    return 0;
}