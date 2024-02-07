// 9. Write a program in C to print following pattern: 
//       A 
//     B  C  
//   D  E  F 
// G  H  I  J
#include <stdio.h>
int main()
{
    int rows = 4;
    char n= 'A';
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",n++);
        }
        printf("\n");
    }
    return 0;
}