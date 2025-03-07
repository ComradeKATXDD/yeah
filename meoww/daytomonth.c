#include <stdio.h>

int main() {
    int totalDays, months, days;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    // Assuming 1 month = 30 days
    months = totalDays / 30;
    days = totalDays % 30;

    // Output the result
    printf("%d days is approximately %d month(s) and %d day(s).\n", totalDays, months, days);

    return 0;
}
