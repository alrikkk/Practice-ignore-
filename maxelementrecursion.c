
#include <stdio.h>

int findMaxRecursive(int array[], int n)
{
    // Base case
    if (n == 1)
    {
        return array[0];
    }

    // Recursive step
    int maxOfRest = findMaxRecursive(array, n - 1);

    // Compare last element with maximum of remaining elements
    if (array[n - 1] > maxOfRest)
    {
        return array[n - 1];
    }
    else
    {
        return maxOfRest;
    }
}

int findMax(int array[], int size)
{
    if (size <= 0)
    {
        printf("Array is empty\n");
        return -1;
    }

    return findMaxRecursive(array, size);
}

int main()
{
    int array[] = {12, 45, 23, 67, 34, 89, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int maximum = findMax(array, size);

    if (size > 0)
    {
        printf("Maximum element in the array is: %d\n", maximum);
    }

    return 0;
}
