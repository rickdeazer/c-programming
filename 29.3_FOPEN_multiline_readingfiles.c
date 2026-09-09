//In this file, we fix the issue in the previous file where only one line was being output by the code.
//FIX: use a while loop with fgets()

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
    //Before we move to a while loop, notice something below:
    fgets(content, sizeof(content), filePointer);
    printf("\n%s", content);
    //Here, the code ouputs the first line of file
    fgets(content, sizeof(content), filePointer);
    printf("\n%s", content);
    //Here, the code outputs the 2nd line of file
    fgets(content, sizeof(content), filePointer);
    printf("\n%s", content);
    //Here, the code outputs the 3rd line of file
    fgets(content, sizeof(content), filePointer);
    printf("\n%s", content);
    //Here, the code outputs the 4th line of file

    //THEREFORE: instead of manually repeating the lines, we can use a while loop to read all the lines in the file.

    // while(fgets(content, sizeof(content), filePointer)){
    //     printf("\n%s", content);
    // }

    return 0;
}