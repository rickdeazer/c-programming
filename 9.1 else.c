// instead of using another if, when a condition was not met, we can use and else statement instead

#include <stdio.h>

int main() {
    int age = 17;

    if (age >= 18)
    {
      printf("You are eligible to vote");
    }

    else {
        printf("You are not eligible to vote");
    }
    

    return 0;
}