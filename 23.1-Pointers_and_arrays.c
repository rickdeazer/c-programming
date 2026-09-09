 #include <stdio.h>

 int main() {
    int numbers[] = {2,3,5,6,4};
    //NOTE: when we use %p on an array, we can just use the array name without the & sign, since array names by default are pointers in C
    for(int i = 0; i < 4; i++){
        printf("\n%d = %p", numbers[i], numbers + i);
    }
    //NOTE: we could have also used numbers[i] above instead of numbers + i which both do the same thing
    printf("\n%p", numbers);
    //NOTE: the code outputs the same memory address as the first value of the array. This means arrays are pointers and by default they always point to the address of their first elements.

    //REMEMBER: insted of doing numbers[i] we could also read from a pointer. i.e. *(numbers + i)
    return 0;   
 }