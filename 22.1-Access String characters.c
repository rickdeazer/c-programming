#include <stdio.h>

int main() {
char string[] = "RickDeazer";
//CHANGING THE VALUE OF STRING CHARACTERS
string[0] = 'r';

//ACCESSING STRING CHARACTERS
printf("%c", string[0]);
printf("\n%c", string[1]);
printf("\n%c", string[2]);
printf("\n%c", string[3]);
printf("\n%c", string[4]);
printf("\n%c", string[5]);
printf("\n%c", string[6]);
printf("\n%c", string[7]);
printf("\n%c", string[8]);
printf("\n%c", string[9]);

printf("\n%s", string);
return 0;
}