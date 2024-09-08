#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_palindrome(string str);

int main(void)
{
    // Get input string from the user
    string text = get_string("Enter a word or phrase: ");
    
    // Check if the input string is a palindrome
    if (is_palindrome(text) == 0)
    {
        printf("\"%s\" is a palindrome.\n", text);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", text);
    }
}

// Function to check if a string is a palindrome
bool is_palindrome(string str)
{
    int len = strlen(str);
    int left = 0;
    int right = len - 1;

    while (left < right)
    {
        // Skip non-alphanumeric characters
        if (!isalnum(str[left]))
        {
            left++;
            continue;
        }

        if (!isalnum(str[right]))
        {
            right--;
            continue;
        }

        // Compare characters, ignoring case
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 1;  // If characters don't match, it's not a palindrome
        }

        left++;
        right--;
    }

    return 0;  // If all characters match, it's a palindrome
}
