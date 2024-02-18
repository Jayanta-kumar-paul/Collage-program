// 16.	Write a program in C to swap to numbers use pointers
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Before swapping:\nnum1 = %d, num2 = %d", num1, num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping:\nnum1 = %d, num2 = %d", num1, num2);
    return 0;
}
// Enter the first number: 12
// Enter the second number: 14
// Before swapping:
// num1 = 12, num2 = 14
// After swapping:
// num1 = 14, num2 = 12