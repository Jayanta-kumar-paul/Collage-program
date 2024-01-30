// Write a program in C to print and calculate the following series:  
// 1+1/4+1/9+1/16+…n term = Result
#include <stdio.h>
int main()
{
    float sum=1.0, n, i, p;
    printf("Enter a number :");
    scanf("%f", &n);
    printf("1+");
    p = 1.0;
    for(i=2.0; i<=n; i++)
    {
        p = p * (i-1)*(i-1) / (i*i);
        printf("1/%.0f+", i);
        sum = sum + p;
    }
    printf("\b=%.2f", sum);
    return 0;
}
// Enter a number :4
// 1+1/2+1/3+1/4=1.42