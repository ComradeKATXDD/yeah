#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2)
        return 0; // Not prime if less than 2

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return 0; // Not a prime number
        }
        return 1; // Prime number
}

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print the result
    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
