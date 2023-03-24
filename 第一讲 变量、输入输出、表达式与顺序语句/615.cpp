#include <cstdio>

using namespace std;

int main()
{
    int x;
    float y;
    scanf("%d%f", &x, &y);
    printf("%.3f km/l", x / y);
    return 0;
}