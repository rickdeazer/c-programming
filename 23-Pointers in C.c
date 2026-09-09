#include <stdio.h>

int main() {
    int age = 25;

    printf("%p", &age);
    //Here %p is trying to output the memory location of the age variable, and thats why we're using &age to access its memory location.
    //In this case, the code outputs: 000000DC2C3FFBCC
    //NOTE: A pointer is also a variable type in C that only stores a memory variable.

    //CREATING POINTER VARIABLES
    int* pt;
    int var;
    //Note the only difference is the asterisk
    int* ptr = &age;

    printf("\nAddress: %p", ptr);
    //Here we get the same value as above which is: 000000DC2C3FFBCC

    //ACCESSING VALUE OF A VARIABLE USING A POINTER
    printf("\nValue: %d", *ptr);
    //Here the code outputs: Value: 25

    //CHANGING VALUE STORED IN A VAR USING A POINTER
    *ptr = 57;
    //RULE: always remember that, *ptr refers to the value stored in the pointer, while ptr without * refers to the memory address

    printf("\nNew value: %d", age);
    //Here the code outputs the new value 57 as the age.

    //COMMON MISTAKES IN POINTERS
    //MISTAKE #1: int *ptr instead of int* ptr
    //MISTAKE #2: int ptr = number; should be *ptr = number; or ptr = &number;
    //MISTAKE #3: *ptr = &number;
    
    return 0;
}