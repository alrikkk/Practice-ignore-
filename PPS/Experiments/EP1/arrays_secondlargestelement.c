#include <stdio.h>
#include <string.h>

int main(void) {
    int intergers[] = {1, 2, 3, 4, 5}   ;
    int secondLargest = intergers[0];
    for (int i = 1; i < 5; i++) {
        if (intergers[i] > secondLargest) {
            secondLargest = intergers[i];
        }
    }
    printf("Second largest element: %d\n", secondLargest);
    return 0;
}