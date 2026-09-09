#include <stdio.h>

int main() {
    int arr[2][3] = {{1,3,5},{2,4,6}};

    //CHANGING VALUES
    arr[0][2] = 50;
    
    printf("%d is the value of the newly changed array value", arr[0][2]);

    return 0;
}