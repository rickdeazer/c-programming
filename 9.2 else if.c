//using else if, we can test multiple conditions linearly

#include <stdio.h>

int main() {
    int age;
    scanf("What is your age? %d", &age);


    if (age > 120)
    {
       printf("Invalid age; greater than 120");
    }
 
    else if (age < 0)
    {
        printf("Invalid age; less than zero");
    }
    
    else if (age >= 18)
    {
        printf("You are eligible to vote");
    }    

    return 0;
}