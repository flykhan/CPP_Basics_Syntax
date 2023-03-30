#include <cmath>
#include <cstdio>

int main()
{
    int a, b, c;
    int max;
    scanf("%d%d%d", &a, &b, &c);
    max = (a + b + abs(a - b)) / 2;
    max = (max + c + abs(max - c)) / 2;
    printf("%d eh o maior", max);
    return 0;
}
