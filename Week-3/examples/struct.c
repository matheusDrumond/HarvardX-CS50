#include <cs50.h>
#include <stdio.h>

// Define a struct for storing a person's information
typedef struct {
    string name;
    string phone;
} Person;

int main(void) {
    // Declare and initialize a struct variable
    Person person1 = {"Alice", "+1-123-456-7890"};

    // Access and print the fields of the struct
    printf("Name: %s\n", person1.name);
    printf("Phone: %s\n", person1.phone);
}