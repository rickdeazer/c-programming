#include <stdio.h>
#include <stdbool.h>
//importing stdbool.h is not available in stdio.h, even though using it without stdbool.h will still work because the compiler will treat any non-zero value as true and zero as false, but it is good practice to include stdbool.h when using boolean values in C.
int main() {
    //INTEGER
    int age = 10;
    printf("%d", age);


    //DOUBLE
    double number = 12.45;
    printf("\n%.2lf", number);

    //FLOAT
    float number1 = 10.9f;
    printf("\n%.1f", number1);

    //EXPONENTIAL NUMBERS
    double number2 = 5.5e6;
    printf("\n%lf", number2);
    
    //CHARACTER
    char character = 'z';
    printf("\n%c", character);
    printf("\n%d", character);

    //BOOLEAN
    bool value1 = true;
    bool value2 = false;
    printf("\n%d", value1);
    //note the use of true and false and not True and False above; Case sensitive

    //STRING
    char name[10][50] = {"John", "Doe", "Jane", "Smith", "Alice", "Bob", "Charlie", "David", "Eve", "Frank"};
    printf("\n%s", name[0]);
    //the 50 above means that each string can be up to 49 characters long, with the last character reserved for the null terminator. The 10 means that we can have up to 10 strings in the array.

    //a null terminator is a special character that indicates the end of a string. It is represented by the character '\0'. In C, strings are represented as arrays of characters, and the null terminator is used to mark the end of the string. When we print a string using printf, it will print all the characters in the array until it reaches the null terminator.

    //or
    char name1[50] = "John Doe";
    printf("\n%c", name1[0]);
    printf("\n%s", name1[0 ]);
    //since we did printf("%s\n", name1[0]); it will print the whole string, but if we did printf("%c\n", name1[0]); it would print only the first character.

    //The difference in the output of the will be the first printf will print only character 'J' and the second printf will print the whole string "John Doe". not the difference in %c and %s.
    return 0;
}