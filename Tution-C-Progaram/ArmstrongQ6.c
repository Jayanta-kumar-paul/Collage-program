// Write a program in C to print Armstrong numbers between a given range.
#include <stdio.h>
int mian()
{
    int range, temp, rev, sum;
    printf("Enter the range:");
    scanf("%d", &range);
    for (int i = 1; i <= range; i++)
    {
        temp = i;
        sum = 0;
        while (temp!=0)
        {
            rev = temp % 10;
            temp = temp / 10;
            sum = sum + (rev * rev * rev);
        }
        if (sum == i)
        {
            printf("%3d", i);
        }
    }
    return 0;
}
// Enter the range:500
//     1  153  370  371  407