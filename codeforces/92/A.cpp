#include <stdio.h>
int main()
{
    int m, n, i;
    scanf("%d %d", &n,&m);
    for (i=1;m>=i;i++)
    {
        m=m-i;
        if (i==n)
            i=0;
    }
    printf("%d",m);
}
