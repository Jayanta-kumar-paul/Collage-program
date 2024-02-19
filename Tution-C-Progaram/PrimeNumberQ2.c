// Write a program in C to print prime numbers between a given range.
#include <stdio.h>

int main()
{
    int  prime, up, low;

    printf("ENTER THE LOWER LIMIT: ");
    scanf("%d", &low);

    printf("ENTER THE UPPER LIMIT: ");
    scanf("%d", &up);

    if (low >= 2)
    {
        printf("PRIME NUMBERS ARE:\n ");
        for (int n = low + 1; n < up; n++)
        {
            prime = 1;
            for (int i = 2; i < n / 2; i++)
            {
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime)
            {
                printf("%5d", n);
            }
        }
    }
    else
    {
        printf("Enter a lower number greater than 1.");
    }

    return 0;
}
// ENTER THE LOWER LIMIT: 10
// ENTER THE UPPER LIMIT: 100
// PRIME NUMBERS ARE:
//     11   13   17   19   23   29   31   37   41   43   47   53   59   61   67   71   73   79   83   89   97