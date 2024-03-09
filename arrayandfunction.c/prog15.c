//15.Store 5 numbers in array and sort it in ascending
//order

#include <stdio.h>

int main() {
    int numbers[5];
    int i, j, temp;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sorting the numbers in ascending order
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted numbers
    printf("\nSorted numbers in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

