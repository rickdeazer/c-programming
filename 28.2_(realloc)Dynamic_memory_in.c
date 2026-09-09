//Using the same example as before, we can allocate even more space for use using the standard library function realloc()
//realloc() takes two arguments during call which are, the pointer variable we want to reallocate memory to, and the new memory sizes we want to reallocate.
 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    int no_of_integers = 4; 

    int* digits;
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
    //note that the first parameter digits is a pointer, and the next param is an integer specifying the memory size we need.
    digits = realloc(digits, no_of_integers * sizeof(int));
    //Instead of creating a new variable, we could just reassign the digits variable.
    for (int i = 0; i < no_of_integers; i++)
    {
        printf("\n%p", digits + i);
    }
    //Remember to use free to release the allocated memory for reuse;
    free(digits);
    return 0;
 }