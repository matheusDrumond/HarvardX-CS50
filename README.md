# Harvard CS50 📖

This repository is dedicated to documenting all the notes I take during the HarvardX CS50 online course. Concepts and code will be shared as I progress through the course.

## Week 0 - Introduction to Computer Science

### Binary System

The base-2 system, known as the binary system, consists of the digits 0 and 1. A binary digit is called a bit, and computers interpret electric signals as 0 or 1: no electricity is 0, and flowing electricity is 1. Modern hardware uses millions of transistors alternating between on and off to process information.

A byte consists of 8 bits. The largest value representable by a byte is 255, calculated as \(2^7 + 2^6 + \dots + 2^0 = 255\).

### Text Representation

The ASCII system uses 8 bits to represent characters. For example, the capital letter "A" is represented by 01000001 (65 in decimal). To decode a bit pattern, calculate the sum of powers of 2 corresponding to each "1" bit. For example, 10001001 represents \(2^7 + 2^3 + 2^0 = 137\).

Apart from ASCII, we also have Unicode, which can use up to 4 bytes to represent characters, allowing over 4 billion possibilities. Unicode values often start with "U+", such as U+1F468.

### Colors

In the RGB color system, colors are represented using three bytes, each indicating the intensity of red, green, and blue, respectively. A pixel on your screen receives three values between 0 and 255 to display a specific color.

### Algorithms

Algorithms are sequences of instructions designed to solve problems. In computing, algorithms process inputs and generate outputs, whether it's text, images, sounds, or something else.

### Large Language Models (LLMs)

LLMs, like chatbots, use vast amounts of text to learn patterns. Rather than relying on a series of conditional statements, these models predict responses by analyzing massive datasets to provide accurate and relevant answers.

---

## Week 1 - C Programming

### Command-Line Interface (CLI)

To manage C programs, we use three essential commands:

1. `code <file-name>.c` - Create a new C file.
2. `make <file-name>` - Compile the C file (omit the extension).
3. `./<file-name>` - Run the compiled file.

The CLI, short for Command Line Interface, provides a more efficient way to execute commands compared to a Graphical User Interface (GUI).

### Basic CLI Commands

-   **mv:** Rename a file: `$ mv oldName.c newName.c`
-   **ls:** List files and directories: `$ ls`
-   **rm:** Remove a file: `$ rm fileName.c`
-   **mkdir:** Create a new directory: `$ mkdir newDirectory`
-   **rmdir:** Remove a directory: `$ rmdir directoryName`
-   **cd:** Navigate directories: `$ cd directoryName` or `$ cd ..`

### Data Types in C

C provides five primary data types:

-   Integer
-   Float
-   Char
-   Double
-   Void

Variable handling involves three steps: declaration, assignment, and initialization:

```c
int number;
number = 17;
int number = 17;  // Declaration and assignment together
```

---

## Week 2 - Arrays and Compilation

### Clang

We use the `make` command to compile our C files, but under the hood, it runs a compiler called Clang. For example:

```bash
make hello  # Compiles hello.c and outputs an executable named hello
```

Using `clang` directly:

```bash
clang hello.c -o hello  # Generates an executable named hello
./hello  # Runs the program
```

### Compilation Process

The C compilation process involves four steps:

1. **Preprocessing:** Handles includes and macros.
2. **Compiling:** Converts C code to assembly.
3. **Assembling:** Translates assembly code to binary.
4. **Linking:** Combines binary files into a single executable.

---

## Week 3 - Algorithms and Data Structures

### Custom Data Structures

In C, we can define custom data structures. For example, to store both a name and a phone number:

```c
typedef struct {
    string name;
    string number;
} person;
```

We can then create an array of `person` structs to store multiple people's data.

```c
person people[3];
people[0].name = "David";
people[0].number = "+1-617-495-1000";
```

---

## How to Run

To run any of the code files provided in this repository:

1. Clone the repository:  
   `git clone <repository-url>`
2. Navigate to the folder:  
   `cd Harvard-CS50`
3. Compile and run a file:  
   `make <file-name>`  
   `./<file-name>`

---

## Contributing

Feel free to fork this repository and submit pull requests with any improvements or additional notes you've made while following the course. Let's learn together!
