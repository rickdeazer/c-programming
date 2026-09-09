//Create a program to find the square root of a number using the sqrt() function and define macro together.

// 1. Include the math.h header file.

// 2. Define a macro function squareRoot(n)
// 3. Inside the main function, use the squareRoot() macro to compute the square root.

#include <stdio.h>
#include <math.h>
#define calculateSqrt(value) (sqrt(value));
//Note that there's no space between calculateSqrt and (value)
int main() {
    int number = 144;
    double squareRoot = calculateSqrt(number);
    printf("The squareRoot of the number: %d is %.2f", number, squareRoot);
    return 0;
}
