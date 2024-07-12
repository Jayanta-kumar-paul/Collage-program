#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 0; i < rows-i-1; i++)
    {
        for (int j = 0; j < rows-i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
