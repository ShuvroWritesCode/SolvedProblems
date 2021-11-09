#include<stdio.h>
int main()
{
    int t, k, sum_even=0, sum_odd=0, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        for(int j=2; j<=n; j++)
        {
            sum_even+=j;
            j++;
        }
        for(int j=1; j<n-1; j++)
        {
            sum_odd += j;
            j++;
        }
        k=sum_even-sum_odd;
        if(k%2 == 1)
        {
            printf("YES\n");
            for(int j=2; j<=n; j++)
            {
            printf("%d ",j);
            j++;
        }
        for(int j=1;j<n-1;j++)
        {
            printf("%d ",j);
            j++;
        }
        printf("%d\n",k);
        }
        else
        {
            printf("NO\n");
        }
        sum_even=0;
        sum_odd=0;
        }
    return 0;
}