#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int multiplies1  = a * b;
    int multiplies2 = c * d;
    int DIFERENCA = multiplies1 - multiplies2;
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}

