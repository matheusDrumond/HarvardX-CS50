#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int n);

int main(void)
{
    // Prompt the user for an integer
    int number = get_int("Enter an integer: ");

    // Check if the number is prime
    if (is_prime(number) == 0)
    {
        printf("%i is a prime number.\n", number);
    }
    else
    {
        printf("%i is not a prime number.\n", number);
    }
}

// Function to check if a number is prime
bool is_prime(int n)
{
    // Numbers less than 2 are not prime
    if (n < 2)
    {
        return 1;
    }

    // Check divisibility up to the square root of n
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 1;  // n is divisible by i, so it's not prime
        }
    }

    return 0;  // If no divisors were found, n is prime
}
