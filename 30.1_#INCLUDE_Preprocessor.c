//In this case, we will begin with #include
#include <stdio.h>
// #include <stdlib.h>
#include <math.h>

int main(){
    int number = 4;
    int squareRoot = sqrt(number);
    printf("The squareroot of %d is %d", number, squareRoot);

    double cubeRoot = cbrt((double)number);
    printf("\nThe cubeRoot of %d is %f", number, cubeRoot);

}