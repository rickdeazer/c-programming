//TASK: create a program that computes the average marks of a student.

//1. create an array that store the marks of 5 subjects.
//2. Compute the total marks by adding all the marks
//3. Divide the total marks by total number of subjects
//4. Print the average marks.

#include <stdio.h>

int main() {

    char subjects[5][50]; // Assuming each subject name can be up to 49 characters long
    int scores[5];
    //here do not forget to initialize the total variable to 0, otherwise it will contain garbage value and your total will be wrong.
    int totals = 0;
    //DATA ENTRY
    for(int i = 0; i<5; i++){
        //note how the loop variable is checked by <5 and not <=5, since the array counts begins from 0, and a count upto to elements will span from 0 to 4, which is a total of 5 elements.
        printf("\nEnter the name of subject %d ", i);
        scanf(" %49s", subjects[i]);
        //NOTE: here, we cannot enter the whole subject name
        printf("\nEnter the score for %s ", subjects[i]);
        scanf("%d", &scores[i]); 
        totals = totals + scores[i];
        //here you could also do totals += scores[i];
        printf("Now the total marks are: %d", totals);
    }
    
    printf("\nRESULTS:");
    for(int i = 0; i<5; i++){
        printf("\nYou got %d marks on %s", scores[i], subjects[i]);
    }

    printf("\nYour total scores are: %d", totals);

    double averagedivider = (double)(sizeof(subjects) / sizeof(subjects[0]));
    
    //here, remember that sizeof(subjects) will give you the size of the array in bytes, and so we have to divide again by the size of one of its elements to get the number of elements in it. 
    printf("\nThe number of subjects is: %f", averagedivider);

    double average = (double)totals / averagedivider;
    
    printf("\nYour general average across all subjects is %f", average);
    //here, we can also do %lf but %f does the same job, for float and double, but strictly only for printf. For scanf always use %lf for double and %f for float.
    return 0;
}

//In this case, the program outputs: You got 45 marks on D
/*
You got 67 marks on G
You got 89 marks on H
You got 45 marks on Y
You got 78 marks on T
Your total scores are: 324
Your general average across all subjects is 16.200000 */
//Note that the average is not correct, because we are dividing by the size of the array in bytes, and not the number of elements in it. To get the number of elements in an array, we can divide the size of the array by the size of one of its elements. In this case, we can divide sizeof(subjects) by sizeof(subjects[0]) to get the number of elements in the array.