# Week 1 - C Programming

## Command-Line Interface (CLI)

To manage and run C programs, we use the following essential commands:

1. **`code <file-name>.c`** - Create a new C file using the code editor.
2. **`make <file-name>`** - Compile the C file (without needing to specify the `.c` extension).
3. **`./<file-name>`** - Run the compiled executable.

The **Command Line Interface (CLI)** allows for efficient command execution compared to a Graphical User Interface (GUI), where instead of clicking icons, you can type commands directly in the terminal.

## Common CLI Commands

-   **`mv`**: Rename or move a file. Example:
    ```bash
    mv oldName.c newName.c
    ```
-   **`ls`**: List files and directories in the current folder:

    ```bash
    ls
    ```

-   **`rm`**: Remove a file:

    ```bash
    rm fileName.c
    ```

-   **`mkdir`**: Create a new directory:

    ```bash
    mkdir newDirectory
    ```

-   **`rmdir`**: Remove a directory:

    ```bash
    rmdir directoryName
    ```

-   **`cd`**: Change directories:
    ```bash
    cd directoryName  # To enter a folder
    cd ..             # To move up one directory
    ```

## Data Types in C

C provides five primary data types:

-   **Integer** (`int`) – for whole numbers
-   **Float** (`float`) – for floating-point numbers (decimals)
-   **Char** (`char`) – for single characters
-   **Double** (`double`) – for double-precision floating-point numbers
-   **Void** (`void`) – for functions that don’t return a value

### Example of Variable Handling

To declare, assign, and initialize variables in C, follow these steps:

1. **Declaration**:

    ```c
    int number;
    ```

2. **Assignment**:

    ```c
    number = 17;
    ```

3. **Initialization (Declaration + Assignment)**:
    ```c
    int number = 17;
    ```
