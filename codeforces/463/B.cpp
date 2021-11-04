#include<stdio.h>
int main()
{
    long long int i, h, a, s=0;
    scanf("%lld", &h);
    for(i=1; i<=h; i++)
    {
        scanf("%lld",&a);
        if(a>s)
        {
        s=a;
        }
    }
    printf("%lld",s);
    return 0;
}