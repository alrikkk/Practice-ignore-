
#include <stdio.h>

void findLargest()
{
    int count, i, largest, currentNum;

    printf("Enter the number of inputs you want to compare: ");
    scanf("%d", &count);

    if (count <= 0)
    {
        printf("Invalid input count.\n");
        return;
    }

    printf("Enter number 1: ");
    scanf("%d", &largest);

    for (i = 2; i <= count; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &currentNum);

        if (currentNum > largest)
        {
            largest = currentNum;
        }
    }

    printf("The largest value is: %d\n", largest);
}

int main()
{
    findLargest();

    return 0;
}
