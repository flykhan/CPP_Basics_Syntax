#include <cstdio>

int main()
{
    int N;
    int h, m, s;
    scanf("%d", &N);
    h = N / (60 * 60);
    m = N % (60 * 60) / 60;
    // s = N - h * (60 * 60) - m * 60;
    s = N % 60;
    printf("%d:%d:%d", h, m, s);
    return 0;
}
