#include <stdio.h>

float f(float x, float y)
{
    return x + y;
}

int main()
{
    float xo, yo, yn, slope, xn, h, n;
    printf("Enter the values of xo,yo");
    scanf("%f %f ", &xo, &yo);
    printf("Enter calculation point xn = ");
    scanf("%f", &xn);
    printf("Enter number of steps: ");
    scanf("%d", &n);

    h = (xn - xo) / 2;
    for (int i = 0; i < n; i++)
    {
        slope = f(xo, yo);
        yn = yo + h * slope;
        yo = yn;
        xo = xo + h;
    }
    printf("%f %f", xo, yo);
}
