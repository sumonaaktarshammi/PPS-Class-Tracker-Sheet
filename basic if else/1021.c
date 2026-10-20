
#include <stdio.h>

int main()
{
    double n;
    int amount;

    scanf("%lf", &n);

    amount = (int)(n * 100 + 0.5);

    printf("NOTAS:\n");

    if (amount >= 10000)
        printf("%d nota(s) de R$ 100.00\n", amount / 10000);
    else
        printf("0 nota(s) de R$ 100.00\n");
    amount = amount % 10000;

    if (amount >= 5000)
        printf("%d nota(s) de R$ 50.00\n", amount / 5000);
    else
        printf("0 nota(s) de R$ 50.00\n");
    amount = amount % 5000;

    if (amount >= 2000)
        printf("%d nota(s) de R$ 20.00\n", amount / 2000);
    else
        printf("0 nota(s) de R$ 20.00\n");
    amount = amount % 2000;

    if (amount >= 1000)
        printf("%d nota(s) de R$ 10.00\n", amount / 1000);
    else
        printf("0 nota(s) de R$ 10.00\n");
    amount = amount % 1000;

    if (amount >= 500)
        printf("%d nota(s) de R$ 5.00\n", amount / 500);
    else
        printf("0 nota(s) de R$ 5.00\n");
    amount = amount % 500;

    if (amount >= 200)
        printf("%d nota(s) de R$ 2.00\n", amount / 200);
    else
        printf("0 nota(s) de R$ 2.00\n");
    amount = amount % 200;

    printf("MOEDAS:\n");

    if (amount >= 100)
        printf("%d moeda(s) de R$ 1.00\n", amount / 100);
    else
        printf("0 moeda(s) de R$ 1.00\n");
    amount = amount % 100;

    if (amount >= 50)
        printf("%d moeda(s) de R$ 0.50\n", amount / 50);
    else
        printf("0 moeda(s) de R$ 0.50\n");
    amount = amount % 50;

    if (amount >= 25)
        printf("%d moeda(s) de R$ 0.25\n", amount / 25);
    else
        printf("0 moeda(s) de R$ 0.25\n");
    amount = amount % 25;

    if (amount >= 10)
        printf("%d moeda(s) de R$ 0.10\n", amount / 10);
    else
        printf("0 moeda(s) de R$ 0.10\n");
    amount = amount % 10;

    if (amount >= 5)
        printf("%d moeda(s) de R$ 0.05\n", amount / 5);
    else
        printf("0 moeda(s) de R$ 0.05\n");
    amount = amount % 5;

    printf("%d moeda(s) de R$ 0.01\n", amount);

    return 0;
}
