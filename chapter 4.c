#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10  // Define the size of the array

int a[MAX];  // Declare a global array of 10 integers

// Function to perform bubble sort on the global array
void bubble_sort() {
    int i, j, temp;
    for (i = 0; i < MAX - 1; i++) {
        for (j = 0; j < MAX - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(0));  // Initialize random seed with current time

    // Fill the array with random numbers between 0 and 99
    for (int i = 0; i < MAX; i++) {
        a[i] = rand() % 100;
    }

    // Display the array before sorting
    printf("Array before sorting:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Sort the array
    bubble_sort();

    // Display the array after sorting
    printf("Array after sorting:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
