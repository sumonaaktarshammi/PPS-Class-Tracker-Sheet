#include <stdio.h>
int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < c + a && c < a + b)
    {
        if (a == b && b == c)
        {
            printf("Valido-Equilatero\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Valido-Isoceles\n");
        }
        else
        {
            printf("Valido-Escaleno\n");
        }

        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a < c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (a * a == b * b + c * c)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }
    return 0;
}