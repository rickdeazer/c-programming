//In this file, we use fputs() standard library function to write into a file.
#include <stdio.h>

int main() {
    FILE* pointer;
    pointer = fopen("29.6_fputs_Example.txt", "w");
    //Remember, if you try opening a non-existent file, a new file will be created instead.

    //Note that opening any file that already had contents in it causes it to lose all data.
    fputs("Hello world this is Mr Rick\n", pointer);
    fputs("I love to program in C\n", pointer);
    fclose(pointer);
    return 0;
}