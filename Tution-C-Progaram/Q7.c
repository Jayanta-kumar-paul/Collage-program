// 7. Write a program in C to print following pattern:
//  * * * *
//    * * *
//      * *
//        *
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("  "); // Print spaces
        }
        for (j = i; j <= n; j++)
        {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    return 0;
}
