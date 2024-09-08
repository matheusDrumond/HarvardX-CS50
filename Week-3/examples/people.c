#include <cs50.h>
#include <stdio.h>

// Define a struct for storing a person's information
typedef struct {
    string name;
    string phone;
} Person;

int main(void) {
    // Declare an array of structs
    Person people[3] = {
        {"Alice", "+1-123-456-7890"},
        {"Bob", "+1-987-654-3210"},
        {"Charlie", "+1-555-555-5555"}
    };

    // Loop through the array and print each person's information
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Phone: %s\n", people[i].name, people[i].phone);
    }
}
