#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid; // Found at index mid
        }
        if (arr[mid] < target) {
            left = mid + 1; // Search in right half
        } else {
            right = mid - 1; // Search in left half
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter the number to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, n, target);
    
    if (result == -1) {
        printf("%d not found in the array.\n", target);
    } else {
        printf("%d found at index %d.\n", target, result);
    }
    
    return 0;
}
