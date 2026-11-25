#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int n[t];
    for (int i = 0; i < t; i++)
    {
        
        scanf("%d", &n[i]);
    }

    long long int fib[61]; // array
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for(int i = 0; i < t; i++)
    {
      printf("Fib(%d) = %lld\n", n[i], fib[n[i]]);  
    }

    return 0;
}