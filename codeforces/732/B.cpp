#include<stdio.h>
int main()
{
    int a, k, m=0;
    scanf("%d %d", &a, &k);
    int b[a];
    scanf("%d", &b[0]);
 
    for(int i=1; i<a; i++)
    {
        scanf("%d", &b[i]);
        if(b[i]+b[i-1] < k)
        {
            m += k-b[i]-b[i-1];
            b[i]=k-b[i-1];
        }
    }
    printf("%d\n",m);
    for(int i=0; i<a; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}