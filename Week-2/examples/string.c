#include <stdio.h>
#include <string.h>

int main(void) {
    // Declare a string (array of characters)
    char name[] = "CS50";

    // Print the string
    printf("The name is: %s\n", name);

    // Find and print the length of the string
    printf("Length of the string: %lu\n", strlen(name));

    return 0;
}
