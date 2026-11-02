
#include <stdio.h>

int isPerfectSquare(int num)
{
    int start, end, mid;
    long long square;

    // Negative numbers cannot be perfect squares
    if (num < 0)
    {
        return 0;
    }

    // Base cases
    if (num == 0 || num == 1)
    {
        return 1;
    }

    // Binary search approach
    start = 1;
    end = num;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        square = (long long)mid * mid;

        if (square == num)
        {
            return 1;
        }
        else if (square < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num))
    {
        printf("%d is a perfect square.\n", num);
    }
    else
    {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
