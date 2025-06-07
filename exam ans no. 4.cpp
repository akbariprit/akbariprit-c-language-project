

#include <stdio.h>


void cubeArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i));  // Cube of element using pointer
    }
}

int main() {
    int size, i;

    
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare array of given size

    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
 cubeArray(arr, size);

    
    printf("Array after cubing each element:\n");
    for (i = 0; i < size; i++) 
    
        printf("%d ", arr[i]);
}
/*
enter five elements 1,2,3,4, : 1 ,8,27,64




*/

