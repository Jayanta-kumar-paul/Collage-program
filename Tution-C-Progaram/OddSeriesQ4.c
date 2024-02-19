// Write a program in C to print and calculate the following series:
// 1-3+5-7+9…n term = Result
#include <stdio.h>
int main()
{
    int num, pos = 1, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= num * 2; i++)
    {
        if (i % 2 != 0)
        {
            if (pos % 2 == 0)
            {
                printf("%d+", i);
                sum = sum - i;
            }
            else
            {
                printf("%d-", i);
                sum = sum + i;
            }
            pos++;
        }
    }
    printf("\b=%d", sum);
    return 0;
}
// Enter the number:6
// 1-3+5-7+9-11=-6