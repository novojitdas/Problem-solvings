#include <stdio.h>

int main()
{
    double A, pi = 3.14159, r;
    scanf("%lf", &r);
    A = pi * (r * r);
    printf("A=%.4lf\n", A);

    return 0;
}