# Week 2 - Arrays and Compilation

## Clang

To compile our C files, we typically use the `make` command, but it's important to know that under the hood, `make` runs a compiler called Clang. Here's an example:

```bash
make hello  # Compiles hello.c and outputs an executable named hello
```

However, you can also use Clang directly:

```bash
clang hello.c -o hello  # Compiles hello.c and outputs an executable named hello
./hello  # Runs the executable program
```

In this case, `-o hello` specifies that the output file should be named `hello`. By default, without the `-o` flag, Clang generates an output file called `a.out`, which can be executed by typing `./a.out`.

## Compilation Process

When compiling C code, several steps are involved to turn your human-readable code into machine-executable instructions. The compilation process consists of four stages:

1. **Preprocessing:** The preprocessor handles directives like `#include` and macros. It essentially prepares your code by expanding these directives before the actual compilation starts.
2. **Compiling:** During this stage, the code written in C is transformed into assembly code, a low-level programming language that is specific to the architecture of your machine.
3. **Assembling:** The assembler translates the assembly code produced in the previous step into binary object code (machine code), which the CPU can understand.
4. **Linking:** Finally, the linker combines all object files, including external libraries, into a single executable file.

### Why This Process Matters

Understanding the steps involved in compilation helps when debugging errors or optimizing your program. For instance, you may encounter errors during the linking phase if the necessary libraries aren’t properly included in your project.

## Arrays in C

An **array** in C is a collection of variables of the same type stored at contiguous memory locations. You can think of it as a list of items (e.g., integers or characters).

### Declaring an Array

To declare an array of integers with 5 elements:

```c
int numbers[5]; // Declares an array with 5 integer elements
```

To initialize it at the same time:

```c
int numbers[5] = {1, 2, 3, 4, 5}; // Assigns values to each element
```

You can access or modify individual elements using their index (starting from 0):

```c
numbers[0] = 10; // Changes the first element to 10
```

### Why Arrays Are Useful

Arrays allow you to store and manipulate large amounts of data efficiently, such as keeping track of multiple user inputs or processing a large set of numbers.

## Strings in C

In C, **strings** are arrays of characters terminated by a null character (`\0`). Strings are not a separate data type in C—they are just character arrays.

### Declaring and Initializing Strings

You can declare and initialize a string like this:

```c
char name[] = "Alice"; // A string is an array of characters
```

Behind the scenes, this string is stored as:

```
'A' 'l' 'i' 'c' 'e' '\0'
```

Each character occupies one byte of memory, and the `\0` character marks the end of the string. You can also create a string by specifying each character individually:

```c
char name[6] = {'A', 'l', 'i', 'c', 'e', '\0'};
```

## Using External Libraries (e.g., `-lcs50`)

To use external libraries like `cs50` in your C programs, you need to link them during compilation using the `-l` flag.

### Example:

```bash
clang hello.c -o hello -lcs50
```

In this command:

-   `-lcs50` tells the compiler to link the `cs50` library.
-   This allows you to use functions provided by the `cs50` library, such as `get_string()`.

This linking is required for any external libraries that are not part of the standard C library. By using `make`, this process is automated, but understanding how it works under the hood helps when working with different libraries.
