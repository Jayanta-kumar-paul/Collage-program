// Write a program in C to find Fibonacci numbers up to given range.
#include<stdio.h>
int main()
{
    int num,a=0,b=1,c;
    printf("Enter limit upto which u want :");
    scanf("%d",&num);
    while(a<num)
    {
        printf("%5d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
// Enter limit upto which u want :100
//   0  1  1  2  3  5  8 13 21 34 55 89
