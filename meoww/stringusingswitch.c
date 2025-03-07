#include <stdio.h>
#include <string.h>

// Function to manually reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to safely input a string using fgets() and remove newline character
void safeInput(char str[], int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline
}

int main() {
    char str1[100], str2[100];
    int choice;

    // Menu
    printf("String Operations Menu:\n");
    printf("1. Find String Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Compare Strings\n");
    printf("5. Reverse String\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    getchar(); // To clear the newline from the input buffer

    switch (choice) {
        case 1: // String Length
            printf("Enter a string: ");
            safeInput(str1, sizeof(str1));
            printf("Length of the string: %lu\n", strlen(str1));
            break;

        case 2: // String Copy
            printf("Enter a string to copy: ");
            safeInput(str1, sizeof(str1));
            strcpy(str2, str1);
            printf("Copied String: %s\n", str2);
            break;

        case 3: // String Concatenation
            printf("Enter first string: ");
            safeInput(str1, sizeof(str1));
            printf("Enter second string: ");
            safeInput(str2, sizeof(str2));
            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
            break;

        case 4: // String Comparison
            printf("Enter first string: ");
            safeInput(str1, sizeof(str1));
            printf("Enter second string: ");
            safeInput(str2, sizeof(str2));
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
        else
            printf("Strings are not equal.\n");
        break;

        case 5: // String Reverse
            printf("Enter a string: ");
            safeInput(str1, sizeof(str1));
            reverseString(str1);
            printf("Reversed String: %s\n", str1);
            break;

        default:
            printf("Invalid choice! Please select between 1-5.\n");
    }

    return 0;
}
