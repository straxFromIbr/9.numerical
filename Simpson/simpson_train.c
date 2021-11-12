#include <stdio.h>
#include <math.h>

#define f(x) (x)*(x)+x+1

int main(void)
{
    float a = 0, b = 1;
    float h;
    float s = 0.0, s0 = 0.0, s1 = 0.0;
    float pi = 3.14159265;
    int n = 200;

    h = (b - a) / (2 * n);
    s = f(a) + f(b);

    for (int i = 1; i <= (2 * n - 1); i += 2)
    {
        s0 += f(a + h * i);
    }
    for (int i = 2; i <= (2 * n - 2); i += 2)
    {
        s1 += f(a + h * i);
    }
    s = h * (s + 4 * s0 + 2 * s1) / 3;

    printf("RESULT : %.8f\n", s);
    printf("ERROR : %.8f\n", pi - s);
    return 0;
}
