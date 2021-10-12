#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,m,x=0;
    scanf("%d %d",&n,&m);
 
    for (i=0;i<=m;i++)
    {
        for (j=0;j<=n;j++)
        {
           if ((i*i+j==m) && (j*j+i==n))
            x++;
        }
    }
    printf("%d",x);
}