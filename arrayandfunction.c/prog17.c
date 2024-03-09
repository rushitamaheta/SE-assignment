/*17.WAP to show difference between
Structure and Union.*/

#include <stdio.h>
#include <string.h>

// Define a structure
struct Employee {
    int empId;
    char empName[50];
    float empSalary;
};

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Structure Example
    struct Employee emp;
    emp.empId = 101;
    strcpy(emp.empName, "John Doe");
    emp.empSalary = 50000.00;

    // Union Example
    union Data data;
    data.i = 10;
    printf("Integer in union: %d\n", data.i);

    data.f = 3.14;
    printf("Float in union: %.2f\n", data.f);

    strcpy(data.str, "Hello");
    printf("String in union: %s\n", data.str);

    // Accessing structure members
    printf("\nEmployee ID: %d\n", emp.empId);
    printf("Employee Name: %s\n", emp.empName);
    printf("Employee Salary: %.2f\n", emp.empSalary);

    return 0;
}

