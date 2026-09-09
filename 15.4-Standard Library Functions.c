//In the previous sections we have been using user-defined-functions.

//Standard Library Functions are already built in on Library files. they include: main() and printf() from <stdio.h> and sqrt() from <math.h>

#include <stdio.h>
//these are the standard libraries that provides access to the functions
#include <math.h>

int main() {
    int a = 4;
    int b = 3;

    //standard functions from math.h
    float result = sqrt(25);
    printf("Square root is %f\n", result);

    float cuberoot = cbrt(27);
    printf("Cube root is %f", cuberoot);

    int power = pow(a,b);
    printf("\nThe power is: %d", power);

    
}