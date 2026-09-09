//Create an enum with enum constants Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday. Inside the main function() create two enum variables named weekend1 and weekend2. Assign values Sunday and Saturday to the variables respectively. Print the values of weekend1 and weekend2

//SOLUTION:
#include <stdio.h>
typedef enum weekDays {
    Monday,
    Tuesday,
    Wednesday,
    Thurday,
    Friday,
    Saturday,
    Sunday
} declare;
int main() {
    declare weekend1 = Saturday;
    declare weekend2 = Sunday;

    printf("Weekend 1 is day: %d and weekend2 is %d", weekend1, weekend2);


    return 0;
}