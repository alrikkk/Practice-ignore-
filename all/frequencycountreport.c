#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 1009

struct Entry {
    int key;
    int count;
    int occupied;
};

struct Entry frequency[TABLE_SIZE];
int distinctCount = 0;

int hashFunction(int key) {
    return ((key % TABLE_SIZE) + TABLE_SIZE) % TABLE_SIZE;
}

void updateFrequency(int num) {
    int index = hashFunction(num);

    while (frequency[index].occupied) {
        if (frequency[index].key == num) {
            frequency[index].count = frequency[index].count + 1;
            return;
        }
        index = (index + 1) % TABLE_SIZE;
    }

    frequency[index].key = num;
    frequency[index].count = 1;
    frequency[index].occupied = 1;
    distinctCount = distinctCount + 1;
}

int main() {
    int totalCount = 0;
    int num;

    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        updateFrequency(num);
        totalCount = totalCount + 1;
    }

    fclose(file);

    printf("====== Frequency Count Report ======\n");
    printf("Total numbers read: %d\n", totalCount);
    printf("Distinct numbers: %d\n", distinctCount);
    printf("------------------------------------\n");

    for (int i = 0; i < TABLE_SIZE; i++) {
        if (frequency[i].occupied) {
            printf("Number: %d -> Frequency: %d\n", frequency[i].key, frequency[i].count);
        }
    }

    return 0;
}
