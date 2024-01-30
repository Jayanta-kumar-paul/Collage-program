// Write a program in C to print Armstrong number between a given range.
#include<stdio.h>
int main()
{
    int num,rem,temp,sum;
    printf("Enter the range:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            temp=temp/10;
            sum=sum+(rem*rem*rem);
        }
        if(sum==i)
        {
            printf("%5d",i);
        }
    }
     printf("\n");
    return 0;
}
// Enter the range:500
//     1  153  370  371  407