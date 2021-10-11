#include<stdio.h>
#include<string.h>
int main()
{
    int t,n[100000],x[1000],floor;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n[i],&x[i]);
    }
    for(int j=0;j<t;j++)
    {
            if(n[j]<=2)
            {
                printf("1\n");
            }
        else if(n[j]>2)
        {
            floor = (n[j] - 3)/x[j] + 2;
        printf("%d\n",floor);
        }
    }
    return 0;
}