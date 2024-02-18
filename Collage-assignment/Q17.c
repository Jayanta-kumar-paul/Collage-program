// 17.	Write a program in C to find factorial of a given number by recursive method.
#include <stdio.h>
void decToBinary(int n)
{
    int binaryNum[' ']; 
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2; 
        n /= 2;              
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decToBinary(n);
    return 0;
}
