//typedef helps us avoid the repetition of the word enum when defining a new variable
#include <stdio.h>
typedef enum Sizes {
    Tiny = 10 ,
    Medium = 20,
    Huge = 30,
    Massive = 40
} size;
int main() {
size shoeSize = Medium;
size legsize = Tiny;
size bodySize = Huge;
size brainSize = Massive; 
//notice the changes from previously using enum Sizes 
printf("\n%d\n", shoeSize);
printf("%d\n", legsize);
printf("%d\n", bodySize);
printf("%d\n", brainSize);

return 0;
}