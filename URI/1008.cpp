#include <stdio.h>
int main()
{
    int employ, wh;
    float aph, res;

    scanf("%d%d%f", &employ, &wh, &aph);
    res = aph * wh;
    printf("NUMBER = %d\n", employ);
    printf("SALARY = U$ %.2f\n", res);

    return 0;
}