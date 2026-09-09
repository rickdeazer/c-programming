//In this example we explore how we can use a typedef, to avoid the repetition of struct Persons datatype when defining a new variable.

#include <stdio.h>

typedef struct Persons {
    int age;
    double Salary;
} persons;

int main() {
persons person1; 
persons person2;

// struct Persons person1;
// struct Persons person2;

person1.age = 19;
person1.Salary = 12332.23;

printf("The age of person1 is %d and his salary is %f", person1.age, person1.Salary);

person2.age = 37;
person2.Salary = 33543.34;

printf("\nThe age of person2 is %d and his salary is %f", person2.age, person2.Salary);

return 0;
}

//Hope you noticed the change.