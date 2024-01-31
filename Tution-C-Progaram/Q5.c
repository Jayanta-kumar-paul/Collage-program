// Write a program in C to print and calculate the following series:   
// x+x/4+x/9+x/16+…n term = Result 
#include <stdio.h>
int main()
{
    float sum=1.0, n, i, p;
    printf("Enter a number :");
    scanf("%f", &n);
    printf("x+");
    p = 1.0;
    for(i=2.0; i<=n; i++)
    {
        p = p * (i-1)*(i-1) / (i*i);
        printf("x/%.0f+", i);
        sum = sum + p;
    }
    printf("\b=%.2f", sum);
    return 0;
}