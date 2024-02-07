// Write a program in C to find cofactors of a given number.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Cofactors of %d are: ", num);

    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d,", i);
        }
    }
    printf("\b");
    return 0;
}
// Enter a number: 10
// Cofactors of 10 are: 1,2,5,10,