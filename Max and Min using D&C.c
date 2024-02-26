#include <stdio.h>

struct Pair {
    int min;
    int max;
};

struct Pair findMinMax(int arr[], int low, int high) {
    struct Pair minmax, leftMinMax, rightMinMax;
    int mid;

    if (low == high) {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            minmax.min = arr[high];
            minmax.max = arr[low];
        } else {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        return minmax;
    }

    mid = (low + high) / 2;
    leftMinMax = findMinMax(arr, low, mid);
    rightMinMax = findMinMax(arr, mid + 1, high);

    if (leftMinMax.min < rightMinMax.min)
        minmax.min = leftMinMax.min;
    else
        minmax.min = rightMinMax.min;

    if (leftMinMax.max > rightMinMax.max)
        minmax.max = leftMinMax.max;
    else
        minmax.max = rightMinMax.max;

    return minmax;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    struct Pair minmax = findMinMax(arr, 0, n - 1);

    printf("Minimum element: %d\n", minmax.min);
    printf("Maximum element: %d\n", minmax.max);

    return 0;
}
