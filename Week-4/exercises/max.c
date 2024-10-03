#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get input from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the maximum value
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);

    // Free the allocated memory
    free(arr);

    return 0;
}
