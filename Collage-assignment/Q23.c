// #include<stdio.h>
// int main ()
// {
//     int a[' '][' '],r1,c1;
//     printf("Enter the first element of matrix :");
//     scanf("%d%d",&r1,&c1);
//     // printf("Enter the second element of matrix :");
//     // scanf("%d%d",&r2,&c2);
//    // if(r1==r1&&c1==c2)
    
//         for(int i=1;i<=r1;i++)
//         {
//             for(int j=1;j<=c1;i++)
//             {
//                 printf("Enter the element of a a[%d][%d]:",i,j);
//                 scanf("%d",&a[i][j]);
//             }
        
//         }
//     printf("Your first matrix is : \n");
//     for(int i=1;i<=r1;i++)
//     {
//         for(int j=1;j<=c1;j++)
//         {
//             printf("%3d",a[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a[' '][' '], r,c;
    printf("Enter elements matrix of matrix: ");
    scanf("%d%d", &r,&c);
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            printf("Enter element of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("Your matrix is :\n ");
        for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}