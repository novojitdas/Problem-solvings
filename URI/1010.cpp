#include <stdio.h>
int main()
{
    int code1, unit1, code2, unit2;
    double price1, price2, res;
    scanf("%d%d%lf%d%d%lf", &code1, &unit1, &price1, &code2, &unit2, &price2);
    res = (unit1 * price1) + (unit2 * price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", res);

    return 0;
}
