#include <stdio.h>
#include <string.h>

// Function to reverse a string using pointers
void reverseString(char *str) {
    char *start = str; // Pointer to start of string
    char *end = str + strlen(str) - 1; // Pointer to end of string
    char temp;

    // Swap characters from start and end using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input
    str[strcspn(str, "\n")] = 0;

    // Reverse the string using function
    reverseString(str);

    // Display reversed string
    printf("Reversed String: %s\n", str);

    return 0;
}
