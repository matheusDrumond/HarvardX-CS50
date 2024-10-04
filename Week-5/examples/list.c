#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 3;  // Initial size of the list (3 elements)

    // Allocate memory to store 'n' integers
    int *list = malloc(n * sizeof(int));
    if (list == NULL)  // Check if memory allocation was successful
    {
        return 1;  // Return 1 if memory allocation fails
    }

    // Initialize the list with values 1, 2, and 3
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Increment 'n' by 1 to add one more element to the list
    n += 1;

    // Allocate new memory for 'n' integers (4 in total) to expand the list
    int *tmp = malloc(n * sizeof(int));
    if (tmp == NULL)  // Check if memory allocation was successful
    {
        free(list);  // Free previously allocated memory to prevent memory leak
        return 1;  // Return 1 if memory allocation fails
    }

    // Copy the original list elements into the newly allocated memory
    for (int j = 0; j < n - 1; j++)  // Loop through the original list
    {
        tmp[j] = list[j];  // Copy elements from 'list' to 'tmp'
    }
    tmp[3] = 4;  // Add the new element (4) to the expanded list

    // Free the old list since it's no longer needed
    free(list);

    // Point 'list' to the new expanded memory block ('tmp')
    list = tmp;

    // Print all elements in the new list
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", list[i]);  // Print each element
    }

    // Free the memory allocated for the new list
    free(list);

    return 0;  // Indicate that the program executed successfully
}
