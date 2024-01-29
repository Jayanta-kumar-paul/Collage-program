#include<stdio.h>
int main()
{
    int num,rev,sum=0,temp;
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("%d is a palindrome number.",temp);
    }
    else
    {
        printf("%d is a Not palindrome number.",temp);
    }
    return 0;
}
