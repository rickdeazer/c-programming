//This is an example of how to use pointers in functions to find the area of a square real quick

#include <stdio.h>

void findSquare(int* dimension, int* area) {
    int result = *dimension * *dimension;
    *area = result;
    //Remember we can even save on steps by avoiding the result variable and directly doing:
    // *area = *dimension * *dimension; this way we make direct allocation and maximise on speeds
}

int main() {
    int length = 10;
    int area = 0;

    findSquare(&length, &area);
    printf("\n The value of the area is: %d", area);

    return 0;
}
//In this example, we pass two pinter arguments: length and area as parameters to the function findSquare which expects two pinter parameters as well. Using the pointers, we directly access the memory locations to access the length dimension, compute the result and save it in a result variable. then, we allocate the value of the variable to the area directly using a pointer.