#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &n);
        printf("%lld\n", (n-1) / 2);    
    }

    return 0;
}