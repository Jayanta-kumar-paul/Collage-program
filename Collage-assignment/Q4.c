// Write a program in C to print and calculate the following series:  
// 2-4+6-8+10…n term = Result
#include <stdio.h>
int main()
{
    int num, pos = 1, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= num * 2; i++)
    {
        if (i % 2 == 0)
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
// 2-4+6-8+10-12=-6