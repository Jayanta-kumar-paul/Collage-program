// Write a program in C to test if a number is special or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int sum = 0;
    int temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("%d is a special number.", num);
    }
    else
    {
        printf("%d is a Not special number.", num);
    }

    return 0;
}
// Enter a number:145
// 145 is a special number
