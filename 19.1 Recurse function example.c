#include <stdio.h>
//we begin by declaring the function prototype since we call it before declaring it.
int recurse(int digit);
int main(){
    int number, result;
    printf("Enter any number to see its recursive addition value ");
    scanf("%d", &number);

    result = recurse(number);
    printf("%d is the total recursive value ", result);

    return 0;
}

int recurse(int digit){
    if (digit > 0)
    {
    return digit + recurse(digit - 1);
    }
}

//EXPLANATION: we first call recurse from the main function with an argument of a number entered by the user e.g. 5

//The recurse function takes the passed argument as a parameter.

//The if block checks if the number is less than 0 and proceeds in our case; since 5 is greater than 0

//in the if block, the recurse function is ended by the return statement, but something happens before it finally ends.

//Before ending, it takes the digit parameter and adds it to the value returned by calling the recurse funtion with [one value less of the digit]

//This means it has not yet closed. It is still waiting for a return value from the function it has called, in order to add it to the digit and return its data to its caller.

//The function it has called (itself) performs the same exact thing as it, but now with one value less notice recurse(digit - 1). This function continues calling it self with one digit less, until the if function says 'no man, you called this function with a value not more than one.' so it terminates and returns 0 to the caller. so its caller will do, digit + [recurse(digit - 1) => has returned 0] so its digit + 0, assuming this digit was 1, it becomes return 1+0 to the previous caller, the previous caller then takes this returned value and does return 2 + (1+0), (1+0) is the return value for the call it made recurse(digit - 1) so it does return 2 + (1 + 0); its previous caller then does return 3 + 1 + 1 + 0 and so on, 

//This happens until we return to the first caller which finally returns 5 + 4 + 3 + 2 + 1 + 0 to the first call from the main function, and assigns that value to the result varaible.

//NOTE: we can swap only the name if to use while and the program still works.

//also NOTE: We can use (digit != 0) as the condition