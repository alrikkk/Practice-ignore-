#include <stdio.h>
#include <stdbool.h>

int main() {
    int count = 0;
    int num;

    while (true) {
        printf("Enter a number (negative to stop): ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Negative number detected. Exiting loop.\n");
            break;
        }

        count = count + 1;
        printf("You entered: %d\n", num);
    }

    printf("Total valid numbers entered: %d\n", count);

    return 0;
}
