#include<stdio.h>
int main()
{
    int a,b,c,x,p,q,r;
    scanf("%d %d %d", &a, &b, &c);
    p=a;
    q=b;
    c=c;

    if(a>b)
    {
      x=a;
      a=b;
      b=x ;
    }
    if(a>c)
    {
      x=a;
      a=c;
      c=x;
    }
    if(b>c)
    {
        x=b;
        b=c;
        c=x;
    }
    printf("%d\n%d\n%d\n", a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",p,q,r);

    return 0;
}

