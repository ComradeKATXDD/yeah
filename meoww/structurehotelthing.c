#include <stdio.h>
#include <string.h> // Added for string functions like strcspn()

// Define structure for Hotel
struct Hotel {
    char name[100];
    char address[200];
    int grade;          // Hotel star rating (e.g., 3, 4, 5)
    float avgRoomRent;  // Average room rent per night
    int numRooms;       // Number of available rooms
};

// Function to safely input a string using fgets() and remove the newline character
void safeInput(char str[], int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline character
}

int main() {
    struct Hotel h1; // Declare a variable of Hotel structure

    // Input details of the hotel
    printf("Enter hotel name: ");
    safeInput(h1.name, sizeof(h1.name));

    printf("Enter hotel address: ");
    safeInput(h1.address, sizeof(h1.address));

    printf("Enter hotel grade (1 to 5 stars): ");
    scanf("%d", &h1.grade);

    printf("Enter average room rent: ");
    scanf("%f", &h1.avgRoomRent);

    printf("Enter number of rooms available: ");
    scanf("%d", &h1.numRooms);

    getchar(); // Clear newline character left in buffer

    // Display hotel details
    printf("\n--- Hotel Details ---\n");
    printf("Name: %s\n", h1.name);
    printf("Address: %s\n", h1.address);
    printf("Grade: %d Star\n", h1.grade);
    printf("Average Room Rent: $%.2f\n", h1.avgRoomRent);
    printf("Number of Rooms: %d\n", h1.numRooms);

    return 0;
}
