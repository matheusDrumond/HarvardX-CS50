#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(10 * sizeof(int)); // Allocate memory

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Forget to free the memory (intentional mistake)
    // free(ptr);

    return 0;
}

// Run this file with valgrind to check for memory leaks:
// valgrind --leak-check=yes ./memory_leak_check