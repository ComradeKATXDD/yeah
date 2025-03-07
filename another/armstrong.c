#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to calculate the sum of digits raised to the power of n
int armstrongSum(int num, int n) {
    int sum = 0, digit;
    while (num != 0) {
        digit = num % 10;
        sum += (int)pow(digit, n);  // Explicit type conversion to int
        num /= 10;
    }
    return sum;
}

int main() {
    int num, digits, sum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count the number of digits
    digits = countDigits(num);

    // Calculate Armstrong sum
    sum = armstrongSum(num, digits);

    // Check if the sum equals the original number
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
