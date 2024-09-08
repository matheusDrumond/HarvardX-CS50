#include <cs50.h>
#include <stdio.h>

int main(void) {
    int a = get_int("a: ");
    int b = get_int("b: ");

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);

    if (b != 0) {
        printf("Quotient: %d\n", a / b);
    } else {
        printf("Cannot divide by zero.\n");
    }
}
