//We use fgets to read file contents in C

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* filePointer;
    char fileName[] = "29.2_Example.txt";
    filePointer = fopen(fileName, "r");
    char content[1000];

    if (filePointer == NULL) {
        printf("Opening file: %s failed", fileName);
        return 0;
    } else
    {
        printf("Opening file: %s successful", fileName);
    }
    printf("\nDisplaying contents of file: %s",fileName);

    fgets(content, sizeof(content), filePointer);

    printf("\n%s", content);
    //NOTICE: here, the page only returns the first line of the specified file

    return 0;
}