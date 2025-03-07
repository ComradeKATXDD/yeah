#include <stdio.h>
#include <ctype.h> // For toupper() function

// Function to convert lowercase to uppercase
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]); // Convert each character to uppercase
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a lowercase string: ");
    scanf("%s", str);

    // Convert to uppercase
    toUpperCase(str);

    // Print uppercase string
    printf("Uppercase String: %s\n", str);

    return 0;
}
