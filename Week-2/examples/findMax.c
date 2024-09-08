#include <stdio.h>

int main(void)
{

    int arr[6] = { 1, 60, 325, 94, 43, 107 };

    int max = arr[0];

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Greatest number: %i", max);
}