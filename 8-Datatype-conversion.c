#include <stdio.h>

int main() {
    int a = 5;
    int b = 9;
    char c = '5';
    int result = a + b;
    int result2 = a + c;

    printf("%d is the first result", result);
    //In this case we get a normal value of 14 from the addition

    printf("\n%d is the second result", result2);
    //In this case we get an abnormal value 58 since 5 is converted into its ASCII value 53

    double d = 5.67;

    int result3 = a + d;
    //Here a is an int dtype, gets converted to higher dtype i.e. double and becomes 5.00, but the result is saved in an int result3 making it an integer
    printf("\n%d is the result of adding int with a double", result3);
    
    //In C lower datatypes can be converted into higher data types in the order: 

    //(lowest) char => short => int => long => float => double => long double (highest)

    //Sometimes higher datatypes can be demoted into lower datatypes

    //IMPLICIT TYPE CONVERSION
    int x = 2.34;

    printf("\n%d", x);
    //This outputs 2, 2.34 is converted into 2 due to assignment of a double to an int. 
    //In this coversion some data is lost. i.e. 0.34 
    //Here all the type conversion is happening automatically. This is called implicit type conversion. When we forcefully convert one dtype to another, this is called explicit type conversion.
    

    //EXPLICIT TYPE CONVERSION
    double y = 1.234;
    int z = 2;
    double result4 = (int)y + z;

    printf("\n%d is the value of addition - explicit", result4);


    //in this case, (int)y forces the y to become an int even if it was declared as a double.
    //In this case, the code outputs 3.0000


    //ANOTHER EXAMPLE OF EXPLICIT CONVERSION
    int m = 7;
    double result5 = m / z;
    printf("\n%lf is the value of the division", result5);
    //In this case, the code outputs 3.0000 which is inaccurate;

    //to get the accurate answer, we can explicitly convert the type of m when calculation the result as follows:

    double result6 = (double)m / z;
    printf("\n%lf is the value of the explicit division", result6);

    //Remember in this calculation z gets automatically converted to a double implicitly during the division
    return 0;
}