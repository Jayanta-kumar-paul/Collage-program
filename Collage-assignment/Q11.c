#include <stdio.h>

int main() 
{
    int a[5] = {45, 22, 100, 66, 37};
    int n = 5, t = 0;

    // Nested loops to compare and swap elements
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

    // Print the sorted array in descending order
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
