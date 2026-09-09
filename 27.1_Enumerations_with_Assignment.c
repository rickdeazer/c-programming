//Remember we previously saw the code output 1 0 2 and 3 since they were the respective values assigned to the Sizes enumaration items. We are going to change the attached values in this case
#include <stdio.h>
enum Sizes {
    //Notice the assigned values
    Tiny = 10 ,
    Medium = 20,
    Huge = 30,
    Massive = 40
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
//In this case, different from the previous file, we get the assigned values as outputs 20 10 30 40;
return 0;
}