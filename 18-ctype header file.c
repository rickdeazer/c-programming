#include <stdio.h>
#include <ctype.h>

int main() {
    char alpha = 'e';
    //using a function to convert the character to uppercase
    char upper = toupper(alpha);
    printf("%c", upper);

    char lower = tolower(upper);
    printf("%c", lower);

    //here toupper and tolower are Standard library variables available via the ctype.h library.
    //In this case, the code outputs Ee
    return 0;
}