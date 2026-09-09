//In enumerations we assign a value to a variable, that carries a value that is of type int.
#include <stdio.h>
enum Sizes {
    Tiny,
    Medium,
    Huge,
    Massive
};
int main() {
enum Sizes shoeSize = Medium;
enum Sizes legsize = Tiny;
enum Sizes bodySize = Huge;
enum Sizes brainSize = Massive; 

printf("\n%d\n", shoeSize);
printf("%d\n", legsize);
printf("%d\n", bodySize);
printf("%d\n", brainSize);
//In this case the code outputs 1 0 2 3, which is expected since the enum outputs int value indexes for its items.
return 0;
}