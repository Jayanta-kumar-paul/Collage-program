#include <stdio.h>

int main()
{
    int array[' '], position, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    printf("Enter the location where you wish to delete an element: ");
    scanf("%d", &position);

    if (position >= n + 1)
    {
        printf("Deletion not possible. Invalid position.\n");
    }
    else
    {
        for (int c = position - 1; c < n - 1; c++)
        {
            array[c] = array[c + 1];
        }
        printf("Resultant array after deletion:\n");
        for (int c = 0; c < n - 1; c++)
        {
            printf("%d ", array[c]);
        }
        printf("\n");
    }

    return 0;
}
