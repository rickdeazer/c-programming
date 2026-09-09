#include <stdio.h>
#include <string.h>

int main() {
    char language[] = "C programming";
     
    printf("%s\n", language);
    //strlen(): Used to find the length of the string;
    //strlen: Used to coun the number of characters in a string.
    printf("\nLength: %zu", strlen(language));
    //strcpy: Used to copy one string into another
    char food[] = "\nPizza ";

    char bestFood[strlen(food)];

    strcpy(bestFood, food);
    //NOTE: The value of the 2nd parameter gets copied into the 1st parameter
    printf("%s\n", bestFood);

    //strcat: Used to combine two strings together.
    char feeling[] = "Is the best food";

    strcat(food, feeling);
    //NOTE: the combined result is returned to the first parameter, i.e. food in this case

    printf("%s\n", food);
    printf("\n%zu is the string length", strlen(food));

    //strcmp compares two stings and returns 0 if the strings are equal, else it returns a random non zero value;

    char sample1[] = "abukudu";
    char sample2[] = "abukuduru";
    char sample3[] = "abukuduru";

    int result1 = strcmp(sample1, sample2);
    int result2 = strcmp(sample2, sample3);

    printf("\n%d is returned from running strcmp on unmatched sample1 and sample2", result1);
    printf("\n%d is returned from running strcmp on matched sample2 and sample3", result2);
    return 0;
}