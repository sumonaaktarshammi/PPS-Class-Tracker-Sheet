#include <stdio.h>
int main()
{
    int p;
    scanf("%d", &p);
    int code, q;

    double total = 0;
    for (int i = 1; i <= p; i++)
    {
        scanf("%d %d", &code, &q);

        if (code == 1001)
        {
            total = total + (1.50 * q);
        }
        else if (code == 1002)
        {
            total = total + (2.50 * q);
        }
        else if (code == 1003)
        {
            total = total + (3.50 * q);
        }
        else if (code == 1004)
        {
            total = total + (4.50 * q);
        }
        else if (code == 1005)
        {
            total = total + (5.50 * q);
        }
    }
    printf("%.2lf\n", total);

    return 0;
}