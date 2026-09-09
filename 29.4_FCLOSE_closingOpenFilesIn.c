//WE USE THE fclose() FUNCTION TO CLOSE A FILE AT THE END
//In this file, we fix the issue in the previous file where only one line was being output by the code.
//FIX: use a while loop with fgets()

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* filePointer;
    char fileName[] = "29.1_Example.txt";
    filePointer = fopen(fileName, "r");
    char content[1000];

    if (filePointer == NULL) {
        printf("Opening file: %s failed", fileName);
        return 0;
    } else
    {
        printf("Opening file: %s successful", fileName);
    }
    printf("\nDisplaying contents of file: %s\n",fileName);
    while(fgets(content, sizeof(content), filePointer)){
        printf("%s", content);
    }
fclose(filePointer);
    return 0;
}