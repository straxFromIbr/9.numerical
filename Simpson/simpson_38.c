#include <stdio.h>
#include <math.h>

#define f(x) sqrt(4 - pow(x, 2))

int main(void)
{
    float a = 0, b = 2;
    float h;
    float s = 0.0, s0 = 0.0, s1 = 0.0, s2 = 0.0;
    float pi = 3.14159265;
    int n;

    scanf("%d", &n);
    h = (b - a) / n;
    s = f(a) + f(b);

    for (int i = 1; i <= n - 2; i += 3)
    {
        s0 += f(a + h * i);
    }
    for (int i = 2; i <= n - 1; i += 3)
    {
        s1 += f(a + h * i);
    }
    for (int i = 3; i <= n - 3; i += 3)
    {
        s2 += f(a + h * i);
    }
    s = (s + 3 * s0 + 3 * s1 + 2 * s2) * 3 * h / 8;

    printf("result : %.8f\n", s);
    printf("ERROR : %.8f\n", pi - s);
    return 0;
}
