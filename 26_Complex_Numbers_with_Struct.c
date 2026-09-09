//Complex number must have two parts: A real part and an imaginary part. To easily work with this nature of complex numbers, we can simply use structs

#include <stdio.h>

typedef struct Complex {
    double real;
    double complex;
} Complex;

int main() {

    Complex number1 = {.real = 232.23, .complex = 2323.32};
    Complex number2 = {.real = 544.34, .complex = 534.34};
    Complex number3 = {.real = 343.43, .complex = 343.34};
    Complex result;
//Note that without typedef we could have used struct Complex number1 instead of just Complex number1;
    result.real = number1.real + number2.real + number3.real;
    result.complex = number1.complex + number2.complex + number3.complex;

    printf("The result of the computation is: %f + %fi", result.real, result.complex);
    //We add the final i to show that its a complex number
    return 0;
}