#include <stdio.h>

// Function to find subarray with given sum
void findSubarrayWithSum(int arr[], int n, int sum) {
    // Iterate through all possible starting points
    for (int start = 0; start < n; start++) {
        int currentSum = 0;
        // Try different ending points for each starting point
        for (int end = start; end < n; end++) {
            currentSum += arr[end];
            
            // If we find the target sum, print the result
            if (currentSum == sum) {
                printf("Subarray found between indices %d and %d\n", start, end);
                printf("Elements: ");
                // Print the elements in the subarray
                for (int i = start; i <= end; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                return;
            }
        }
    }
    printf("No subarray found with sum %d\n", sum);
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 33;
    
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget sum: %d\n", targetSum);
    
    findSubarrayWithSum(arr, n, targetSum);
    
    return 0;
}