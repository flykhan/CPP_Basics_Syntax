#include <cstdio>

int main()
{
    char name[10];
    double a, b;
    scanf("%s%lf%lf", &name, &a, &b);
    printf("TOTAL = R$ %.2lf\n", a + b * 0.15);
    return 0;
}
