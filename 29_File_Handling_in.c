//We use fopen() to read files in c and store them in FILE pointers
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* filePointer;
    //notice the FILE* type pointer declaration
    filePointer = fopen("29.2_Example.txt","r");
    //we pass two arguments here, file name and the access mode, in this case read only mode
    if (filePointer == NULL)
    {
        printf("File not found");
    } else { 
        printf("File successfully Opened");
    }
    //Here we do a safe check to confirm we really managed to access the specified file

    return 0;
}