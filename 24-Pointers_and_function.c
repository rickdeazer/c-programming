//In this example we are going to call another function which changes the value of a variable using a pointer.

//You will not that the advantage of this is that it is fast since we do not need to return the changed value to the caller. Instead, we use the passed pointer to changed the value directly.

#include <stdio.h>

void findValue(int* pointer){

        *pointer = 39;
    };
int main() {
    int number = 0;

    findValue(&number);

    printf("The newly changed value is: %d", number);
    //NOTE: instead of just using number, we could have also used: *(&number) which works just the same.
    return 0;
}
//THIS IS A PERFECT EXAMPLE FOR WHY C PROGRAMS ARE FAST