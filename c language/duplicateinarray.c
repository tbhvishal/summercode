#include <stdio.h>
int main() {
    int size, i, j;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements in the array are:\n");
    int foundDuplicate = 0;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                foundDuplicate = 1;
                break; 
            }
        }
    }
    
    if (!foundDuplicate) {
        printf("No duplicate elements found.\n");
    } else {
        printf("\n");
    }
    
    return 0;
}