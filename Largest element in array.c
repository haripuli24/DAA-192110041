#include <stdio.h>

#define MAX_SIZE 100 

int main() {
    int arr[MAX_SIZE];
    int size, largest;
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
