#include <stdio.h>

int linearSearch(int array[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (array[i] == target) {
            return i;  
        }
    }
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = linearSearch(array, n, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array\n");
    }

    return 0;
}

