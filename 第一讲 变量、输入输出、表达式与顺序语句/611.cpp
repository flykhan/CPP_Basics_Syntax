#include <cstdio>

int main()
{
    int a, b, d, e;
    double c, f;
    scanf("%d%d%lf", &a, &b, &c);
    scanf("%d%d%lf", &d, &e, &f);
    printf("VALOR A PAGAR: R$ %.2lf\n", b * c + e * f);
    return 0;
}
