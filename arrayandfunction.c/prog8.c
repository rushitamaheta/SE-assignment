/*8. WAP to reverse a string and check that the string is palindrome
or not*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming maximum length of input string is 100
    char reverse[100];
    int i, length;
    int isPalindrome = 1; // Assuming the string is a palindrome by default

    printf("Enter a string: ");
    scanf("%s", str); // Read string

    // Calculate the length of the string
    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reverse[length - 1 - i] = str[i];
    }
    reverse[length] = '\0'; // Null-terminate the reversed string

    // Check if the original and reversed strings are equal
    for (i = 0; i < length; i++) {
        if (str[i] != reverse[i]) {
            isPalindrome = 0; // If characters don't match, it's not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

