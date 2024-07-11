#include <stdio.h>

int main()
 {
    int a[' '][' '],b[' '][' '], c[' '][' '],r1,r2,c1,c2;
    printf("Enter elements  of matrix : ");
    scanf("%d%d", &r1,&c1);
    printf("Enter 2elements  of matrix : ");
    scanf("%d%d", &r2,&c2);
   if(r1==r2&&c1==c2)
    {
    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c1; j++)
        {
            printf("Enter element of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("Your matrix is :\n ");
        for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c1; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
   for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            printf("Enter element of a[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
        printf("Your matrix is :\n ");
        for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=r1;i++)
    {
    for(int j=1;j<=r2;j++)
    {
    c[i][j]=a[i][j]*b[i][j];
    }
    }
    printf("Your addition matrix is :\n ");
        for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            printf("%3d",c[i][j]);
        }
        printf("\n");
     }
     }
     else
     {
     printf("Wrong order entered");
     }
    return 0;
}