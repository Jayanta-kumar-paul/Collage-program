#include<stdio.h>
    int main()
{
    char input[100];
    int left = 0;
    int right;
    printf("Enter a string: ");
    scanf("%s", &input);
    right = 0;
    while (input[right] != '\0')
    {
        right++;
    }
    right--; 
    while (left < right)
    {
        if (input[left] != input[right])
        {
            printf("The string is not a palindrome.\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("The string is a palindrome.\n");
    return 0;
}