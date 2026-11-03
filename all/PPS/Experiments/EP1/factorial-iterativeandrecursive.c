#include <stdio.h>

// Iterative approach using a loop
long factorial_iter(int n) {
    if (n < 0) return -1; // Handle negative input
    
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive approach calling itself
long factorial_rec(int n) {
    if (n < 0) return -1;  // Handle negative input
    if (n == 0) return 1;  // Base case: 0! = 1
    
    return n * factorial_rec(n - 1); // Recursive step
}

int main() {
    int test_cases[] = {0, 5, 20};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("%-5s | %-20s | %-20s\n", "n", "Iterative Result", "Recursive Result");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < num_tests; i++) {
        int n = test_cases[i];
        long iter_res = factorial_iter(n);
        long rec_res = factorial_rec(n);
        
        printf("%-5d | %-20ld | %-20ld\n", n, iter_res, rec_res);
    }

    return 0;
}



// another one 

/*include <stdio.h> 
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
    
int main() {
printf("Fibonacci of 10: %d\n", fib(10));
return 0;
}*/