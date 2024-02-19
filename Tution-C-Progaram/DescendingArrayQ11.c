// 11. Write a program in C to sort an array in Descending order.
#include <stdio.h>
int main()
{
    int a[' '];
    int n, t = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf(" The sorted array in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
// Enter the number of elements in the array: 5
// Enter 5 elements:
// 12
// 98
// 45
// 65
// 99
//  The sorted array in descending order:
// 99 98 65 45 12 
