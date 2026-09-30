#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;        // Potential ceil found
            high = mid - 1;   // Search left to find the first occurrence
        } else {
            low = mid + 1;    // arr[mid] < x, search right
        }
    }

    return ans;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    printf("%d\n", index);

    return 0;
}
