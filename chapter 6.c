#include <stdio.h>
#include <string.h>

struct Record {
    int id;
    char name[20];
};

// Function to sort records by ID
void sortRecords(struct Record records[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (records[i].id > records[j].id) {
                struct Record temp = records[i];
                records[i] = records[j];
                records[j] = temp;
            }
        }
    }
}

int main() {
    struct Record records[] = {{3, "Alice"}, {1, "Bob"}, {2, "Charlie"}};
    int n = sizeof(records) / sizeof(records[0]);

    // Sort records by ID
    sortRecords(records, n);

    // Print sorted records
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    return 0;
}
