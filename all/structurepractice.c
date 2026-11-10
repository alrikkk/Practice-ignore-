#include <stdio.h>
#include <string.h>

struct Employees {
    int id;
    char name[50];
    float salary;
};

struct Employees classList[6];

int main() {
    //data one
    strcpy(classList[0].name, "John Doe");
    classList[0].id = 01;
    classList[0].salary = 50000.00;
    //data two
    strcpy(classList[1].name, "Jane Doe");
    classList[1].id = 02;
    classList[1].salary = 60000.00;
    //data three
    strcpy(classList[2].name, "Jim Beam");
    classList[2].id = 03;
    classList[2].salary = 55000.00;
    // data four 
    strcpy(classList[3].name, "Jack Daniels");
    classList[3].id = 04;
    classList[3].salary = 70000.00;
    // data five
    strcpy(classList[4].name, "Joseph Kony");
    classList[4].id = 05;
    classList[4].salary = 65000.00;
    // data six
    strcpy(classList[5].name, "Jill Valentine");
    classList[5].id = 06;
    classList[5].salary = 75000.00;
    // print data
    for (int i = 0; i < 6; i++) {
        printf("Employee ID: %d\n", classList[i].id);
        printf("Employee Name: %s\n", classList[i].name);
        printf("Employee Salary: %.2f\n", classList[i].salary);
        printf("\n");}
    }
