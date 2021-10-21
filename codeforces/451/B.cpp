#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a[100000],count=0,l,r,mark=0;
	scanf("%d",&n);
	r=n-1;	
	for(int i=0;i<n;i++)
	{
	    scanf("%d",a+i);
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1] && mark==0)
		{
		    count++;
		    mark=1;
		    l=i;
		}
		if(mark==1 && a[i]<a[i+1])
		{
		    mark=0;
		    r=i;
		}
	}
	if(count==0)
	{
	    printf("yes\n1 1");
	}
	else if(count>1)
	{
	    printf("no");
	}
	else
	{
		if(l==0 && r==n-1)
		{
		    printf("yes\n%d %d",1,n);
		}
		else if(l==0)
		{
		    if(a[l]<a[r+1])
		    {
		        printf("yes\n%d %d",l+1,r+1);
		    }
		    else
		    {
		        printf("no");
		    }
		}
		else if(r==n-1)
		{
		    if(a[r]>a[l-1])
		    {
		        printf("yes\n%d %d",l+1,r+1);
		    }
		    else
		    {
		        printf("no");
		    }
		}
		else{
			if(a[l]<a[r+1] && a[r]>a[l-1])
			{
			    printf("yes\n%d %d",l+1,r+1);
			}
			else
			{
			    printf("no");
			}
		}	
	} 
	return 0;
}