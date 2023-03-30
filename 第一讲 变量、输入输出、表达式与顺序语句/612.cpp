#include <iostream>

using namespace std;

const double pi = 3.14159;

int main()
{
    int R;
    cin >> R;
    printf("VOLUME = %.3lf", (4 / 3.0) * pi * R * R * R);
    return 0;
}
