//A Struct in C is used to store related data together in C under a single name. A struct is a collection of variables under a single name. The variables can be of different types.
//For instance we can use a struct to store the name and age of a person.
//StructS are also often termed as structures in C
//Remember, a struct is also a datatype in C 

//STRUCTURE: 

/*
struct Person person{
    double salary;
    int age; }
*/ 

//As noticed above, structs in c begin with the struct keyword, struct datatype, then followed by the struct data type. In this case we use person as the name of the struct. 
//The variables inside the struct are called members of the struct.

#include <stdio.h>

struct Persons {
    int age;
    double Salary;
};

int main() {
struct Persons person1;
struct Persons person2;
//Notice how we use struct Persons as a datatype to declare person1 and person2 varibles.

person1.age = 19;
person1.Salary = 12332.23;

printf("The age of person1 is %d and his salary is %f", person1.age, person1.Salary);

person2.age = 37;
person2.Salary = 33543.34;

printf("\nThe age of person2 is %d and his salary is %f", person2.age, person2.Salary);

return 0;
}