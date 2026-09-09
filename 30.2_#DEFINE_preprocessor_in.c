//In this case
#include <stdio.h>
#define PI 3.1415 
//Kindly note that there's no semicolon after the PI value. Adding one will make your program crash.
#define circleArea(r) (PI * r * r);
int main() {
    double radius = 12.4;
    double area =  circleArea(radius)  // or PI * radius * radius;
    printf("The value of PI is: %.4lf", PI); 
    printf("\n And the area of the circle is: %f", area);
    return 0;
}