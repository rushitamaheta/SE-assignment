//7. WAP Find out length of string without using inbuilt function

#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum length of input string is 100
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string with spaces until newline character

    // Iterate through the string until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}



	

