#include<stdio.h>
int main()
{
    int t,n, a, b = 0, sum = 0, sum1=0;
    scanf("%d %d",&t,&n);
    while(t--)
    {
        scanf("%d",&a);
        if(a!=b)
        {
            sum++;
        }
        if(a==b && sum>=sum1)
        {
            sum1=sum;
            sum=1;
        }
        if(a==b && sum<sum1)
        {
           sum1=sum1;
           sum=1;
        }
        b=a;
    }
    if(sum>sum1)
    {
        printf("%d\n",sum);
    }
    else
    {
        printf("%d\n",sum1);
    }
    return 0;
}