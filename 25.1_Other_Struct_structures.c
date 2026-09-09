//In this one, we look at some few modifications or alternatives to create struct variables

#include <stdio.h>

struct Persons {
    int age;
    double Salary;
};

int main() {
struct Persons person1 = {.age = 19, .Salary = 12332.23};
struct Persons person2 = {.age = 37, .Salary = 33543.34};

// person1.age = 19;
// person1.Salary = 12332.23;

printf("The age of person1 is %d and his salary is %f", person1.age, person1.Salary);

// person2.age = 37;
// person2.Salary = 33543.34;

printf("\nThe age of person2 is %d and his salary is %f", person2.age, person2.Salary);

return 0;
}