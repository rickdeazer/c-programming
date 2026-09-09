//STRUCTURE:

/*
returnType functionName() {
    //function body
    return data;
}
*/

#include <stdio.h>

//we can use void as the return type if the function does not return anything

//EXAMPLE:

void greet() {
    printf("\nGood morning\n");
}

int main() {

    greet();
    //greet() calls the function for execution. every function must be called.
    printf("\nAfter function call");

    //Good thing about functions is their re-usability. for example:

    greet();
    greet();
    greet();

    //TIP: always use descriptive names for function names to make you know what the function does even before we read it. in our case we name the function greet since it displays a greeting.
    
    return 0;
}