#include <cs50.h>
#include <stdio.h>

int linear_search(int arr[], int size, int target);

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = get_int("Integer: ");

    // Perform linear search
    int result = linear_search(numbers, size, target);
    if (result != -1) {
        printf("Found %d at index %d\n", target, result);
    } else {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}

// Linear search function
int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index where the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}
