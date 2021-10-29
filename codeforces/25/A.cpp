#include<stdio.h>
int main()
{
    int n,b,count=0,i,j,ans1,ans2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1 ;
            ans1=i+1 ;
        }
        else
        {
            ans2=i+1 ;
        }
    }
     if(count==1)
     {
        printf("%d",ans1);
     }
     else
     {
        printf("%d",ans2);
     }
    return 0;
}