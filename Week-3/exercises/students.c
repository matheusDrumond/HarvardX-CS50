#include <cs50.h>
#include <stdio.h>

// Define a struct to store student information
typedef struct
{
    string name;
    int id;
    float grade;
} Student;

int main(void)
{
    // Ask the user how many students to enter
    int num_students = get_int("Number of students: ");
    printf("\n---\n");

    // Create an array of Student structs based on the number of students
    Student students[num_students];

    // Loop to take input for each student
    for (int i = 0; i < num_students; i++)
    {
        printf("Student %d:\n", i + 1);
        students[i].name = get_string("Name: ");
        students[i].id = get_int("ID: ");
        students[i].grade = get_float("Grade: ");
        if(i != num_students - 1) printf("\n");
    }

    // Print all student information
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }

}
