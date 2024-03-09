//10.WAP to perform Palindrome number using for loop and function

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}


