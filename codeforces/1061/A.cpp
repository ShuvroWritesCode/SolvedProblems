#include <stdio.h>
int main()
{
    long long a,n,ans;
    scanf("%lld %lld",&a,&n);
    if(n%a==0)
    {
        ans=n/a;
    }
    else
    {
        ans=(n/a)+1;
    }
    printf("%lld\n",ans);
    return 0;
}