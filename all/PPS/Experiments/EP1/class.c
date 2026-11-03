#include <stdio.h>
void setTo100(int *x){
    *x = 100;
}

int main() {
    int a = 5;
    setTo100(&a);
    printf("%d\n", a);
    return 0;
}
