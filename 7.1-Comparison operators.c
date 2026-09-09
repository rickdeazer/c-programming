#include <stdio.h>

int main() {
    //GREATER THAN OPERATOR >
    
    bool value = (12 > 9);
    printf("is 12 greater than 9? %d ", value);
    //In this case the code returns 1 for true/yes


    //LESS THAN OPERATOR <
    bool value1 = (15 < 9);
    printf("\nis 15 less than 9? %d", value1);
    //In this case the code outputs 0 for false/no

    //EQUAL TO OPERATOR
    bool value2 = (9 == 9);
    printf("\nis 9 equal to 9? %d", value2);
    //In this case the code outputs 1 for true/yes


    //COMPOUND OPERATORS e.g <= or >=
    bool value3 = (10 >= 8);
    bool value4 = (12 <= 2);
    printf("\n%d __ %d are bool values of comparisons on value3 and value4 respectively", value3, value4);
    return 0;
}