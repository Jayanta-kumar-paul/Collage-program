//WAP in c to print three integers gcd and lcm//
#include<stdio.h>
int main()
{
    int a,b,c,gcd,lcm;
    printf("Enter the First integer:");
    scanf("%d",&a);
    printf("Enter the Second integer:");
    scanf("%d",&b);
    printf("Enter the Third integer:");
    scanf("%d",&c);
    for(int i=1;i<=a+b+c;i++)
    {
        if(a%i==0&&b%i==0&&c%i==0)
        {
            gcd=i;
        }
    }
    for(int i=1;i<=a*b*c;i++)
    {
        if(i%a==0&&i%b==0&&i%c==0)
        {
            lcm=i;
            break;
        }
        
    }
    printf("GCD=%d\n",gcd);
    printf("LCM=%d\n",lcm);
    return 0;
}
// Enter the First integer:5
// Enter the Second integer:10
// Enter the Third integer:15
// GCD=5
// LCM=30