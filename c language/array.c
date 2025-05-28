
#include <stdio.h>

int main() {
    int size, i;
    
    printf("Enter size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nElements in array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}