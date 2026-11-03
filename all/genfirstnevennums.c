
#include <stdio.h>

void generateEvenNumbers(int N)
{
    int i, evenNumber;

    if (N <= 0)
    {
        printf("Please enter a positive integer\n");
        return;
    }

    printf("The first %d even numbers are:\n", N);

    for (i = 1; i <= N; i++)
    {
        evenNumber = i * 2;
        printf("%d ", evenNumber);
    }

    printf("\n");
}

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    generateEvenNumbers(N);

    return 0;
}
