//These operators include (AND &&) (OR ||) AND (NOT !) 


#include <stdio.h>

int main() {
    int age = 19;
    double height = 5.7;
    
    //AND OPERATOR - we use two ampersands i.e. &&
    bool result = (age >= 18) && (height > 6.0);
    printf("%d is the result", result);
    //in this case the result is 0 since both of the arguments are not true i.e. height is not > 6.0


    //OR OPERATOR -- use double vertical strokes ||
    bool result1 = (age >= 18) || (height > 6.0);
    printf("\n%d is the result", result1);
    //in this case the result is 1 since one of the arguments is true


    //NOT OPERATOR -- we use an exclamation mark
    //if the expression is false it returns true and viceversa
    //You can think of it as looking for the opposite of something
    bool result2 = !(age >= 18);
    printf("\n%d is the negation of result2", result2);
    //here age is 19; greate than 18 which is true/yes/1
    //the ! operator negates the result and offers the opposite of it which is false/no/0

    return 0;
}