#include <stdio.h>
#include <math.h>

int reverse(int n, int len) {
        if (n == 0) return 0;
        return (n % 10) * pow(10, len -1) + reverse(n / 10, len - 1);
    }
int countDigits(int n) {
    if (n == 0) return 1;
    return 1 + countDigits(n/10);
}
int main() {
    int num = 12345,len;
    if (num == 0) printf("Reverse: 0\n");
    else {
        len = countDigits(num);
        printf("Reverse: %d\n", reverse(num,len));
    }
    return 0;
}