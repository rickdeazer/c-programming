//STRUCTURE

/*
do {
    //body of loop
} while(condition);
*/

#include <stdio.h>

int main() {
    int count = 1;
    // int count = 5;

    do {
        printf("%d\n", count);
        count +=1;
    } while(count < 5);
    return 0;
}

//NOTE: the difference between a while loop and a do while loop is that in a do while loop, the condition is always executed atleast once.

//for instance when we use the count value as 5, the condition is not met but the while block runs once outputting 5;