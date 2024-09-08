#include <cs50.h>
#include <stdio.h>

int len(string t);


int main(void)
{
    string s = get_string("String: ");

    int size = len(s);

    printf("Size: %i\n", size);
}


int len(string t)
{
    int i = 0;

    while (t[i] != '\0')
    {
        i++;
    }

    return i;
}
