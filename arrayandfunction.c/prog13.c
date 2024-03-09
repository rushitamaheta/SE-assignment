/*13.WAP to accept 5 numbers from user and check entered number is even
or oddusing of array*/

#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Checking if each entered number is even or odd
    printf("\nNumber\t\tEven/Odd\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t\t", numbers[i]);
        if (numbers[i] % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }

    return 0;
}

