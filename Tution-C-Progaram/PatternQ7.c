// 7. Write a program in C to print following pattern:
//  * * * *
//    * * *
//      * *
//        *
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  "); // Print spaces
        }
        for (int j = i; j <= n; j++)
        {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    return 0;
}
