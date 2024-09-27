#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory for an array of 5 integers
    int *arr = malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values and print the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 2;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
