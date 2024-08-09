#include <stdio.h>

int binarySearch(int array[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid;
        }

        if (array[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the sorted elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = binarySearch(array, 0, n - 1, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array\n");
    }

    return 0;
}

