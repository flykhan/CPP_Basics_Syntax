#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    double c;
    scanf("%d%d%lf", &a, &b, &c);
    printf("NUMBER = %d\nSALARY = U$ %.2lf", a, b * c);
    return 0;
}