#include<stdio.h>
int main()
{
    int a,n,b=0,i;
    scanf("%d",&a);
    char x[a],z;
    z=getchar();
    for (i=0;i<a;i++)
    {
        scanf("%c",&x[i]);
    }
    n=a/11;
    for (i=0;i<a;++i)
    {
        if (x[i]=='8')
        {
            b=b+1;
        }
    }
    if (b>0 && b>n)
    {
        printf("\n%d",n);
    }
    else if (b>0 && b<=n)
    {
        printf("\n%d",b);
    }
    else printf("\n0");
    return 0;
}