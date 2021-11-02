#include<stdio.h>
int main()
{
    int a, b, s, p;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        s=a-b;
        p=s/2;
        printf("%d %d", b, p);
    }
    if(b>a)
    {
        s=b-a;
        p=s/2;
        printf("%d %d", a, p);
    }
    if(a==b)
    {
        printf("%d 0", a);
    }
    return 0;
}