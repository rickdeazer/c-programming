 //C PROVIDES 3 MAJOR FUNCTIONS TO PERFORM DYNAMIC MEMORY ALLOCATION malloc() realloc() and free() 

 //HERE, we begin with the malloc() function which stands for memory allocation. 

 //It is used to reserve a block of memory of the specified size.

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    int no_of_integers = 4; 

    int* digits;
    //notice digits is a pointer meaning malloc returns an array of pointers too.
    digits = (int*) malloc(no_of_integers * sizeof(*digits));
    //malloc takes an int parameter to specify the size that we want to allocate. In this case, we should not hard code as we want the system to dynamically adapt hence the essence of using:
    //The number of intergers we want to preserve memory for, then multiply by four since each integer will take exactly 4bytes of data.

    if (digits == NULL)
    {
        //This body fails if malloc could not allocate the memory if it encountered problems like lack of adequate memory. If this happens, it assigns NULL to the variable
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
        //you could also do printf("\n%d", *(digits[i]))
    }
    //Notice that if we change above from i < no_of_integers to i < 6, the code will still work and save the entered values to memory. This is called undefined behaviour in C. But its always safe to ensure we use malloc to secure storage for our data. 
    return 0;
 }