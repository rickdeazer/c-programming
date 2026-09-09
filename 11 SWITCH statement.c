//STRUCTURE:

/*
switch(variable/expression) {
    case value1:
    //body of case
    break;

    case value2:
    //body of case 2
    break;

    case value3:
    //body of case 3
    break;

    default:
    //body of default
}
*/


#include <stdio.h>

int main() {
    //EXAMPLE 1:
    int number;
    printf("Enter any number between 1 and 7 ");
    scanf("%d", &number);

    switch(number) {
        case 1:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wednesday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("Friday");
        break;
        
        default:
        printf("Saturday");

    }

    //NOTE: if you ommit break, all conditions after an argument is met get executed. e.g. if the user enters 3, the computer outputs Wednesday upto saturday


    //EXAMPLE 2:

    int day;
    printf("\nPlease enter a day to check if its a weekday or weekend ");
    scanf("\n%d", &day);

    switch (day)
    {
     case 1:
     case 2:
     case 3:
     case 4:
     case 5:
        printf("weekday");
        break;

     case 6:
        printf("Weekend");
        break;

    case 7:
        printf("Weekend");
        break;
    
    default:
        printf("Invalid day entered");
    }


    return 0;
}