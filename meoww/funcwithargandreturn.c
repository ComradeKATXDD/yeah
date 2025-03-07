#include <stdio.h>

// Function with arguments and return value
int add(int a, int b) {
    return a + b; // Returns the sum of two numbers
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2); // Function call with arguments

    printf("Sum = %d\n", result);
    return 0;
}
