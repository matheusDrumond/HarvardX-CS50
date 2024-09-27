# Week 4 - Memory

## Introduction to Memory Management

In Week 4, we delve deeper into how memory works in C, especially in relation to dynamic memory allocation and pointers. Memory management is a critical concept in C programming, as it allows us to control how memory is used and freed when it is no longer needed.

## Hexadecimal (Base 16)

Hexadecimal is a number system with base 16, which uses the digits 0–9 and the letters A–F (or a–f) to represent values. Hexadecimal is commonly used in programming because it maps neatly onto binary (base 2), and it’s a compact way to represent large binary numbers.

### Why Use Hexadecimal?

-   **Efficiency**: Hexadecimal is more compact than binary and makes reading large binary numbers easier.
-   **Memory Representation**: Computers often represent memory addresses in hexadecimal for simplicity, as one hexadecimal digit represents exactly four binary digits (bits).

### Conversion Between Hexadecimal and Decimal

-   **From Decimal to Hex**: Continuously divide the decimal number by 16, recording the remainders (0–15). The remainders represent the hexadecimal digits.
    -   Example: Convert decimal 255 to hexadecimal:
        -   255 ÷ 16 = 15, remainder 15 → F
        -   15 ÷ 16 = 0, remainder 15 → F
        -   Result: 255 in hexadecimal is **FF**.
-   **From Hex to Decimal**: Multiply each digit by 16 raised to the power of its position (from right to left, starting at 0).
    -   Example: Convert hexadecimal `A1` to decimal:
        -   A (10) × 16¹ + 1 × 16⁰ = 160 + 1 = 161
        -   Result: `A1` in decimal is **161**.

### Using Hex in C

In C, hexadecimal numbers are prefixed with `0x`:

```c
int hex = 0xFF; // 255 in decimal
printf("%d", hex); // Output: 255
```

## The `&` Operator (Address-of Operator)

The `&` operator is used to obtain the memory address of a variable. This is essential when dealing with pointers in C.

### Example:

```c
int n = 10;
int *p = &n; // p now holds the address of n
```

Here, `p` points to `n` because `&n` provides the address where `n` is stored in memory.

## The `*` Operator (Dereferencing)

The `*` operator is used to **dereference** a pointer, i.e., to access the value stored at the memory address that the pointer holds.

### Example:

```c
int n = 10;
int *p = &n; // p points to the address of n
printf("%d", *p); // Dereferences p, output: 10
```

In this example, `*p` accesses the value of `n` through the pointer `p`.

## Strings as Pointers

In C, strings are actually arrays of characters, and arrays are closely tied to pointers. When you declare a string, you’re actually declaring a pointer to the first character of the string.

### String Declaration

A string in C is an array of characters terminated by a null character (`\0`).

```c
char str[] = "Hello"; // String literal stored in an array
```

### Strings as Pointers

You can also declare strings as pointers, which is useful when dynamically allocating memory for strings or passing them to functions.

```c
char *str = "Hello"; // Pointer to the first character of the string
```

In this case, `str` holds the memory address of the first character (`'H'`). The remaining characters are stored sequentially in memory, and the string ends with the null terminator (`\0`).

### Accessing String Characters Using Pointers

```c
char *str = "Hello";
printf("%c", *str);    // Output: H
printf("%c", *(str+1)); // Output: e
```

Here, `str` points to the first character of the string, and by using pointer arithmetic (`str + 1`), you can access subsequent characters.

### Pointer Arithmetic and Strings

Pointer arithmetic is often used to iterate over strings:

```c
char *str = "Hello";
while (*str != '\0')  // Loop until the null terminator
{
    printf("%c", *str);  // Print current character
    str++;  // Move the pointer to the next character
}
```

## Dynamic Memory Allocation with `malloc`

In C, dynamic memory allocation allows you to allocate memory at runtime, rather than at compile-time. This is useful when the size of your data structure is not known until the program is running. The `malloc` function (memory allocation) is used to allocate a block of memory of a specified size, and it returns a pointer to the beginning of the block.

### Syntax:

```c
void *malloc(size_t size);
```

-   `size`: The number of bytes to allocate.
-   The function returns a pointer to the allocated memory. If the allocation fails, it returns `NULL`.

### Example:

```c
int *arr = malloc(10 * sizeof(int)); // Allocate memory for an array of 10 integers

if (arr == NULL)
{
    // Handle memory allocation failure
    printf("Memory allocation failed\n");
}
```

In this example, `malloc` allocates memory for 10 integers, and the pointer `arr` points to the first element of the allocated memory.

---

## Freeing Allocated Memory with `free`

Whenever you allocate memory dynamically using `malloc` (or related functions like `calloc` or `realloc`), it is important to release that memory once you're done using it. This is done using the `free` function, which prevents memory leaks and ensures efficient memory management.

### Syntax:

```c
void free(void *ptr);
```

-   `ptr`: A pointer to the memory block to be freed.

### Example:

```c
free(arr); // Free the memory allocated to arr
```

Once `free` is called, the memory pointed to by `arr` is returned to the system, and `arr` becomes a dangling pointer (it no longer points to valid memory).

---

## Debugging Memory Issues with `valgrind`

`valgrind` is a powerful tool used for detecting memory-related issues such as memory leaks, invalid memory access, and improper use of `malloc` and `free`. It is often used to ensure that memory is being properly managed in C programs.

### How to Use `valgrind`:

To run `valgrind` on your program, use the following command:

```bash
valgrind ./your_program
```

`valgrind` will output information about memory errors, memory usage, and any potential leaks. It is invaluable for catching bugs related to incorrect memory management.

---

## Passing Pointers as Parameters in Functions

In C, passing pointers as function parameters allows functions to modify the variables in the caller’s scope. This is useful when you want a function to modify an argument’s value or when you want to avoid copying large amounts of data by passing a reference to it instead of the data itself.

### Example:

```c
void modify_value(int *p)
{
    *p = 20; // Dereference the pointer and modify the value it points to
}

int main()
{
    int num = 10;
    modify_value(&num); // Pass the address of num
    printf("%d\n", num); // Output will be 20
    return 0;
}
```

In this example, the `modify_value` function takes a pointer to an integer as a parameter. When the function modifies `*p`, it changes the value of `num` in the calling function. This is an efficient way to allow a function to modify variables outside its own scope.

---

By understanding these concepts, you will have a deeper knowledge of memory management in C and how to use pointers effectively in your programs.
