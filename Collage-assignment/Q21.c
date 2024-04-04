#include <stdio.h>

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find LCM of two numbers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b, c, gcd_ab, gcd_abc, lcm_abc;

    printf("Enter the First integer: ");
    scanf("%d", &a);
    printf("Enter the Second integer: ");
    scanf("%d", &b);
    printf("Enter the Third integer: ");
    scanf("%d", &c);

    // Find GCD of a and b, and then GCD of the result with c
    gcd_ab = gcd(a, b);
    gcd_abc = gcd(gcd_ab, c);

    // Find LCM of a and b, and then LCM of the result with c
    lcm_abc = lcm(lcm(a, b), c);

    printf("GCD = %d\n", gcd_abc);
    printf("LCM = %d\n", lcm_abc);

    return 0;
}
