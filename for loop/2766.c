#include <stdio.h>
int main()
{
    char n[10][31];
    for (int i = 0; i <= 10; i++)
    {
        scanf("%s", n[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 2 || i == 6 || i == 8)
        {
            printf("%s\n", n[i]);
        }
    }
    return 0;
}