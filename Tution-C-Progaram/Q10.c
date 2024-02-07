// 10. Write a program in C to print the first 10 Fibonacci numbers.
#include <stdio.h>

int main()
{
    int i, n = 10; // Number of terms to print
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\b");

    return 0;
}
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
