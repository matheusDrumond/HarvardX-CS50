#include <cs50.h>
#include <stdio.h>

int b_search(int t, int arr[], int min, int max);

int main(void)
{
    int numbers[] = {5, 12, 24, 30, 32, 46, 57, 58, 60, 69, 78, 81, 85, 92, 98, 99};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = get_int("Target: ");

    int result = b_search(target, numbers, 0, size - 1);

    if(result == -1)
    {
        printf("%i not found in array.\n", target);
    }
    else
    {
        printf("%i found at index %i\n", target, result);
    }
}

int b_search(int t, int arr[], int min, int max)
{
    if (max >= min)
    {
        int index = (min + max) / 2;
        int middle = arr[index];

        if (middle == t) return index;

        if(middle < t)
        {
            return b_search(t, arr, index + 1, max);
        }
        else
        {
            return b_search(t, arr, min, index - 1);
        }
    }
    else
    {
        return -1;
    }
}
