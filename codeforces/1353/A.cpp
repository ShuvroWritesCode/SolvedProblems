#include <stdio.h>
int main()
{
    int test, m, n, i;
    scanf("%d",&test);
    
    for (i=0;i<test;i++)
    {
        scanf("%d %d",&n,&m);
        if(n==1) 
        {
            printf("0\n");
        }
        else if(n==2)
        {
            printf("%d\n",m);
        }
        else
        printf("%d\n",m*2);
    }
    
  return 0;
}