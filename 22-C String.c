//STRUCTURE:
//char str[] = "Programing";
#include <stdio.h>

int main() {
    char str[] = "Programing";
    printf("%s",str);
    
    char name[21];
    printf("\nEnter your name: ");
    //printf("The name entered is: %s", name);  
    fgets(name, sizeof(name), stdin);
    //NOTICE that until here everything works good if we only enter one name but not two names since scanf works well until it meets a white space. Enter Rick Deazer as the name and Deazer will be skipped.
    //To fix this we swap that line using fgets instead.
    printf("The name entered is: %s", name);
    return 0;
}