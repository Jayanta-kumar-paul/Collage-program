// Write a program in C to print following pattern:
//         *
//       * *
//     * * *
//   * * * *
#include<stdio.h>
int main()
{
    float num,p,sum=1.0 ,i;
    printf("Enter the number:");
    scanf("%f",&num);
    printf("1+");
    for( i=2.0;i<=num;i++)
    {
        printf("1/%.0f+",i*i);
        p=1/(i*i);
        sum=sum+p;
    }
    printf("\b=%.2f",sum);
    return 0;
}