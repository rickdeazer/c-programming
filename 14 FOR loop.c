//STRUCTURE:

/*
    for(int i = 0; testExpression; updateExpression ) {
    //code inside the loop
    }

*/

#include <stdio.h>

int main() {
    //EXAMPLE 1:
    for(int i = 0; i < 5; i ++){
        printf("%d ", i);
    }

    //EXAMPLE 2:
    int sum = 0;
    for(int i = 0; i < 101; i++){
        sum += i;
    }
    //The loop calculates the sum of all between from 1 to 101
    printf("\n%d is the total sum", sum);

    
    //YOU CAN ALSO USE BREAK WITH FOR LOOPS USING IF. For instance we can use if to check inside the for loop's body if i == 10, then in the if's body we can add the break.

    for (int i = 0; i < 5; i ++){
            printf("\n%d in the break loop example\n", i);
            if(i == 3){
                break;
            };
            //notice how the code stops executing when it reaches 3 due to action of break
        }

    //continue

    for(int i = 0; i < 5; i++){
        if(i == 3){
            continue;
            //once the argument of this if statement returns true, the continue statement executes and effect: the loop skips this iteration. meaning 3 does not get printed
        }
        
        //NOTICE HOW THIS PRINTF STATEMENTS COMES AFTER THE IF BLOCK WITH CONTINUE, AND NOT AFTER.
        printf("\n%d in the for loop continue example\n", i);
    }


    return 0; 
}

//YOU CAN DECIDE WHETHER TO USE A FOR LOOP OR A WHILE LOOP BUT A FOR LOOP SERVES A SIMILAR PURPOSE IN LESS LINES OF CODE.
