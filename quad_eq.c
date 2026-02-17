#include <stdio.h>
#include <math.h>

void findRoots(int a, int b, int c)
{
    // If a is zero, it's not 
    // a quadratic equation
    if (a == 0) {
        printf("imaginary");
        return;
    }

    // Calculate discriminant D = b^2 - 4ac
    int D = b * b - 4 * a * c;

    // If discriminant is negative,
    // roots are imaginary
    if (D < 0) {
        printf("imaginary");
        return;
    }

    // Compute square root of discriminant
    int sqrtD = (int)sqrt(D);

    // Compute both roots using 
    // quadratic formula
    int r1 = (int)floor((-b + sqrtD) / (2.0 * a));
    int r2 = (int)floor((-b - sqrtD) / (2.0 * a));

    // Ensure roots are printed 
    // in decreasing order
    if (r1 < r2) {
        int temp = r1;
        r1 = r2;
        r2 = temp;
    }

    // Print both roots
    printf("%d %d", r1, r2);
}

int main()
{
    int a = 1, b = -7, c = 12;
    findRoots(a, b, c);
    return 0;
}