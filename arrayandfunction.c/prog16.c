/*16.Accept 5 numbers from user and perform
sum of array*/

#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating the sum of the numbers
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Displaying the sum
    printf("\nSum of the numbers: %d\n", sum);

    return 0;
}

