/*12.WAP to find maximum number among 3 numbers using ternary
operator*/

#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Accepting three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("Maximum number is: %d\n",  max);

}

