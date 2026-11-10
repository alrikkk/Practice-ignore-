#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p;
    struct Point *ptr = &p;

    // Set values using pointer
    ptr->x = 10;
    ptr->y = 20;

    // Print using arrow operator
    printf("X coordinate: %d\n", ptr->x);
    printf("Y coordinate: %d\n", ptr->y);

    // Equivalent syntax using dereferencing
    printf("X coordinate using (*ptr).x: %d\n", (*ptr).x);

    return 0;
}
