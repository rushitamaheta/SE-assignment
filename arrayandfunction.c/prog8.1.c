/*Write a program of structure employee that provides the
following
a. information -print and display empno, empname,
addressandage
b. Write a program of structure for five employee
that provides the following information -print and
displayempno, empname, address andage*/

#include <stdio.h>

// Define the structure for an employee
struct Employee {
    int empno,i;
    char empname[50];
    char address[100];
    int age;
};

// Function to print and display information for a single employee
void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
	int i;
    // Information for a single employee
    struct Employee emp1 = {101, "John Doe", "123 Main St, City, Country", 30};
    
    printf("Information for Single Employee:\n");
    printEmployee(emp1);
    
    // Information for five employees
    struct Employee employees[5] = {
        {201, "Alice Smith", "456 Elm St, City, Country", 25},
        {202, "Bob Johnson", "789 Oak St, City, Country", 35},
        {203, "Emma Brown", "321 Pine St, City, Country", 28},
        {204, "Michael Lee", "654 Maple St, City, Country", 40},
        {205, "Sophia Wilson", "987 Cedar St, City, Country", 32}
    };
    
    printf("\nInformation for Five Employees:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printEmployee(employees[i]);
        printf("\n");
    }
    

}


