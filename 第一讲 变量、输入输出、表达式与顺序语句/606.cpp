#include <iostream>

using namespace std;

int main()
{
    float a, b, w = 3.5 + 7.5;
    scanf("%f%f", &a, &b);
    printf("MEDIA = %.5f", a * 3.5 / w + b * 7.5 / w);
    return 0;
}