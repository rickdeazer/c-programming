//In this case, to free the allocated memory we use the stadard library function free()
//free() takes only one parameter, which is a pointer variable pointing to the memory we need to clear.
 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    int no_of_integers = 4; 

    int* digits;
    //notice digits is a pointer meaning malloc returns an array of pointers too.
    digits = (int*) malloc(no_of_integers * sizeof(*digits));

    if (digits == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    
    printf("Enter any four numbers below\n");

    for(int i = 0; i < no_of_integers; i++){
        scanf("\n %d", digits + i);
    }

    printf("\nThe following are you four entered digits:");

    for(int i = 0; i < no_of_integers; i++){
        printf("\n%d",*(digits + i));
    }
    //Here we use free to release the allocated memory for another use, but not that we do not clear the data inside. This means that we can still access the data items in the location using the pointers, so long as the memory is still available; not taken for another process. 
    free(digits);
    return 0;
 }

