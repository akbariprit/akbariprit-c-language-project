#include<stdio.h>


void printReverseAndSum(int arr[], int size) {
    int sum = 0;

    printf("Array in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum of all elements: %d\n", sum);
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    printReverseAndSum(arr, size);

    return 0;
}
/*
sum of all elements : 75

*/