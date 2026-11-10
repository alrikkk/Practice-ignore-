#include <stdio.h>

struct Point {
    int x;
    int y;  
};

int main() {
    struct Point p1 = {10, 20};
    struct Point *ptr = &p1;

    printf("Point coordinates: (%d, %d)\n", ptr->x, ptr->y);

    printf("Point address: %p\n", (void*)ptr);

    return 0;
}

