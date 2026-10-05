#include <stdio.h>
#include <string.h>

int main(void) {
    char a[] = "apple", b[] = "banana";
    if (strcmp(a,b) < 0) {
        printf("%s comes before %s\n",a,b);
    }
    return 0;
}