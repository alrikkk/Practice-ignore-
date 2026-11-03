
#include <stdio.h>

void countFrequency(int arr[], int n)
{
    int i, j, k, count, visited;

    for (i = 0; i < n; i++)
    {
        count = 1;
        visited = 0;

        // Check for duplicate elements before current index
        for (k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                visited = 1;
                break;
            }
        }

        if (visited == 0)
        {
            // Count occurrences of current element
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    count++;
                }
            }

            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, n);

    return 0;
}
