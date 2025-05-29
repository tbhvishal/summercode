
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10

void printArrayAndRowSums(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
            rowSum += arr[i][j];
        }
        printf("| Row Sum: %d\n", rowSum);
    }
}

