#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float sum1 = a + b;
    float sum2 = b + c;
    float sum3 = c + a;
    float peri = a+b+c;
    float area = (a+b)*c /2;
    if (sum1 > c && sum2 > a && sum3 > b)
    {
        printf("Perimetro = %.1f", peri);
    }
    else
    {
        printf("Area = %.1f", area);
    }
    return 0;
}