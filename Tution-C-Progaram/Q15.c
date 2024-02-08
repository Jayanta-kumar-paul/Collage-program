#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c; // coefficients of the equation
    float d; // discriminant
    float r1, r2; // roots of the equation
    float rp, ip; // real and imaginary parts of complex roots

    printf("Enter the coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) // not a quadratic equation
    {
        printf("Invalid input.\n");
        return 0;
    }

    d = b * b - 4 * a * c; // calculate the discriminant

    if (d > 0) // two real and distinct roots
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are %.2f and %.2f\n", r1, r2);
    }
    else if (d == 0) // two real and equal roots
    {
        r1 = r2 = -b / (2 * a);
        printf("The roots are %.2f and %.2f\n", r1, r2);
    }
    else // two complex and conjugate roots
    {
        rp = -b / (2 * a); // real part
        ip = sqrt(-d) / (2 * a); // imaginary part
        printf("The roots are %.2f + %.2fi and %.2f - %.2fi\n", rp, ip, rp, ip);
    }

    return 0;
}
