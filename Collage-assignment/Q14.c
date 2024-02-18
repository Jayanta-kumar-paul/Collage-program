// 14.	Write a program in C to count number of vowels, consonants and digits in a given string.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int vowels = 0;
    int consonants = 0;
    int digits = 0;

    printf("Enter your string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    return 0;
}
// Enter your string : JayantaKumar912
// Vowels: 5
// Consonants: 7
// Digits: 3