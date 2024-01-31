// Write a program in C to print following pattern:
//      1
//    1 1
//  1 2 1
// 1 3 3 1
#include <stdio.h>
int main()
{
    int rows = 4;
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 0; j <rows-i; j++)
        {
            printf(" ");
        }
        int c=1;
        for(int k=1;k<=i;k++)
        {
            printf("%d",c);
            c=c*(i-k)/k;
        }
        printf("\n");
    }
    return 0;
}