//RETURING POINTERS FROM FUNCTIONS

//Using this code from the previous example.


#include <stdio.h>

int* findSquare(int* dimension, int* area) {
    int result = *dimension * *dimension;
    *area = result;
    //her e after the assignment, we can choose to return either of: return area if the function is of type int* since area is already a pointer. Or, return result if the function is of type int not int*

    return area;
}

int main() {
    int length = 10;
    int area = 0;

    int* result = findSquare(&length, &area);
    //Note the * after the int since the result variable is expecting findSquare to return a pointer.
    
    printf("\n The value of the area is: %d", *result);

    return 0;
}