//STRUCTURE:

//datatype arrayName[arraySize]

#include <stdio.h>

int main() {
    //EXAMPLE
    int age[5];

    //STORING DATA IN AN ARRAY
    int ages[] = {21, 29, 25, 32, 17};

    //NOTE: We could also do: int ages[5] = {21, 29, 25, 32, 17};

    //If we are unsure of the size of the array we can ommit the [size] digit to let c automatically find the size

    //An array can carry less number of items than the specified size but cannot exceed the specified size. e.g.

    int numbers[6] = {1,3,4}; //CORRECT
    int digits[3] = {1,2,3,4,5,6}; //WRONG

    //ACCESSING ARRAY ELEMENTS

    printf("\n%d", numbers[0]);
    printf("\n%d", numbers[1]);
    printf("\n%d", numbers[2]);
    printf("\n%d", numbers[3]);
    printf("\n%d", numbers[4]);
    printf("\n%d", numbers[5]);

    //ASSIGNING VALUES TO AN ARRAY
    int amounts[5]; //variable declaration
    amounts[0] = 1;//value assignment🔻
    amounts[1] = 15;
    amounts[2] = 30;
    amounts[3] = 45;
    amounts[4] = 50;

    printf("\n\n\n\n%d", amounts[0]);
    printf("\n%d", amounts[1]);
    printf("\n%d", amounts[2]);
    printf("\n%d", amounts[3]);
    printf("\n%d", amounts[4]);
    printf("\n\n\n%d", amounts[20]);
    //Note this last line outputs garbage since c does not handle undefined memory allocations nicely
    
    return 0;
}