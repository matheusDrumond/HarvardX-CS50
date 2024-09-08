#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter an integer: ");
    
    int sum = 0;

    number = (number < 0) ? -number : number;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}
