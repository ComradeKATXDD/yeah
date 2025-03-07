#include <stdio.h>

#define MAX 100  // Maximum size of array

// Function to insert an element at a given position
void insert(int arr[], int *size, int element, int position) {
    if (*size >= MAX) {
        printf("Array is full, cannot insert.\n");
        return;
    }
    if (position < 1 || position > *size + 1) {
        printf("Invalid position! Enter position between 1 and %d.\n", *size + 1);
        return;
    }

    // Shift elements to the right
    for (int i = *size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;  // Insert the element
    (*size)++;  // Increase size
    printf("Element inserted successfully!\n");
}

// Function to delete an element from a given position
void delete(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty, cannot delete.\n");
        return;
    }
    if (position < 1 || position > *size) {
        printf("Invalid position! Enter position between 1 and %d.\n", *size);
        return;
    }

    // Shift elements to the left
    for (int i = position - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;  // Decrease size
    printf("Element deleted successfully!\n");
}

// Function to search for an element in the array
void search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at position %d.\n", element, i + 1);
            return;
        }
    }
    printf("Element %d not found in the array.\n", element);
}

// Function to display the array
void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], size = 0, choice, element, position;

    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Search an element\n");
        printf("4. Display array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (1 to %d): ", size + 1);
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;

            case 2:
                printf("Enter position to delete (1 to %d): ", size);
                scanf("%d", &position);
                delete(arr, &size, position);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                search(arr, size, element);
                break;

            case 4:
                display(arr, size);
                break;

            case 5:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}
