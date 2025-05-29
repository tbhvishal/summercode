#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];
    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The diagonal elements of the array are:\n");
    for (i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][i]);
    }
    
    printf("\n");
    return 0;
}