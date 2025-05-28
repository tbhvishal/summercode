
#include <stdio.h>

int main() {
    int size, i, sum = 0;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("\nSum of elements in array is: %d\n", sum);

    return 0;
}
