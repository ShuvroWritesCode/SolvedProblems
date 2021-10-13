#include<stdio.h>
#include<math.h>
 
int main()
{
    int n,i,sum=0;
    
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(max-arr[i]);
    }
    printf("%d",sum);
    return 0;
}