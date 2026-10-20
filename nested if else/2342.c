#include <stdio.h>
int main()
{
    int n, p, q, result;
    char c;

    scanf("%d", &n);
    scanf("%d %c %d", &p, &c, &q);

    if (c == '+')
    {
        result = p + q;
    }
    else
    {
        result = p * q;
    }
    if (result > n)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        printf("OK\n");
    }

    return 0;
}