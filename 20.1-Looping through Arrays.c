#include <stdio.h>

int main() {
    int ages[10];
    for(int i = 0; i <= 10; i++){
        printf("Enter a number to add to the array ");
        scanf("%d", &ages[i]);
    }

    for(int i = 0; i <= 10; i++){
        printf("\nArray value %d is %d", i, ages[i]);
    }


    return 0;
}