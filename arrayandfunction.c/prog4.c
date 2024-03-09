//4. WAP to find factorial using recursion

#include <stdio.h>

// Function to find factorial recursively
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n * factorial(n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print the factorial
        unsigned long long fact = factorial(num);
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}


