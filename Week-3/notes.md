# Week 3 - Algorithms and Data Structures

## Introduction to Algorithms

An **algorithm** is a sequence of steps or instructions designed to solve a problem. In programming, algorithms can manipulate data, perform calculations, and guide decision-making processes. Common types of algorithms include searching, sorting, and traversal methods.

### Characteristics of Algorithms

-   **Correctness**: An algorithm must correctly solve the problem it is designed for.
-   **Efficiency**: The algorithm should complete its task in a reasonable amount of time.
-   **Clarity**: A clear algorithm is easy to understand and implement.

## Custom Data Structures in C

In C, we can define custom data structures using the struct keyword. This allows us to group variables of different types under one name.

### Example: Defining a Custom Data Structure

Suppose we want to store information about people, including their name and phone number. We can define a person struct like this:

```c
typedef struct {
string name;
string number;
} person;
```

### Creating an Array of person Structs

Once the structure is defined, we can create an array of person structs to store multiple people's information. For example:

```c
person people[3];

people[0].name = "David";
people[0].number = "+1-617-495-1000";

people[1].name = "Carter";
people[1].number = "+1-617-495-1001";

people[2].name = "John";
people[2].number = "+1-949-468-2750";
```

Here, we are storing information for three people in an array of person structs.

### Accessing Data from Custom Structures

To access individual fields within a struct, we use the dot (.) operator. For example:

```c
printf("Name: %s, Phone: %s", people[0].name, people[0].number);
```

This will print the name and phone number of the first person in the people array.

## Arrays and Memory Management

In Week 2, we learned about arrays in C. In Week 3, we'll expand on this by focusing on how arrays are used in conjunction with custom data structures.

Arrays in C are stored in contiguous blocks of memory, and the size of the array must be declared when the array is created. When we store a custom struct in an array, each element in the array occupies the amount of memory needed for the variables defined in the struct.

### Example: Memory Considerations

If each person struct in the previous example uses 40 bytes of memory (due to the combined size of the name and number strings), then an array of 3 person structs would take 120 bytes in total.

Managing memory efficiently is crucial in C, especially when dealing with larger arrays or dynamic memory allocation, which will be covered in more advanced topics.

## Common Algorithms

This week, we also begin working with common algorithms such as **searching** and **sorting**:

### Linear Search

The **linear search** algorithm checks each element in an array one by one until the target element is found or the entire array is searched.

```c
int linear_search(int arr[], int n, int target)
{
for (int i = 0; i < n; i++)
{
if (arr[i] == target)
{
return i; // Return the index where the target is found
}
}
return -1; // Return -1 if the target is not found
}
```

### Bubble Sort

**Bubble sort** is a simple sorting algorithm that repeatedly steps through the array, compares adjacent elements, and swaps them if they are in the wrong order.

```c
void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}
```

### Importance of Algorithmic Efficiency

The efficiency of an algorithm is often measured in terms of **time complexity** and **space complexity**:

-   **Time complexity** refers to how the running time of an algorithm increases as the input size grows.
-   **Space complexity** refers to how much additional memory the algorithm uses based on the input size.

Choosing the right algorithm for the task at hand can dramatically affect the performance of your program, especially when working with large datasets.

---

By the end of Week 3, you'll have a foundational understanding of how to define and use custom data structures in C and how basic algorithms such as searching and sorting work. You'll also have learned the importance of efficiency when working with algorithms.
