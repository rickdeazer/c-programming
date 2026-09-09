//STRUCTURE

/*
    while(condition){
        //statements inside while
    }
*/

#include <stdio.h>

int main() {
    int i = 0;
    while ( i < 100) {
        i++;
        printf("%d\n", i);
    }

    return 0;
}

//The code in this case assign a value of 0 to i
//The while loop adds one to the initial value and prints the value until the value is no more less than 100