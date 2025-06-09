#include <stdio.h>

void cubeElements(int *arr, int rows, int cols) {
for (int i = 0; i < rows * cols; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i));
    }
}

void printArray(int *arr, int rows, int cols) {
    printf("Array after cubing all elements:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
            printf("%d\t", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3], i, j;

    printf("Enter 3x3 matrix elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], 3, 3);  // Pass base address
    printArray(&arr[0][0], 3, 3);

    return 0;
}

