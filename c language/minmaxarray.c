#include <stdio.h>

int main()
{
    int size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    int arr[size];

    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\nMinimum element in array is: %d\n", min);
    printf("Maximum element in array is: %d\n", max);

    return 0;
}