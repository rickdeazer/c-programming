//HOW TO CHECK FOR THE SIZE OF A DATATYPE

#include <stdio.h>

int main() {
    int age = 19;
    double age1 = 20.5;
    char age2 = 'a';
    float age3 = 32.3;
    printf("Int size = %zu", sizeof(age));
    printf("\ndouble size = %zu", sizeof(age1));
    printf("\nchar age %zu", sizeof(age2));
    printf("\nfloat age %zu", sizeof(age3));
    return 0;
}