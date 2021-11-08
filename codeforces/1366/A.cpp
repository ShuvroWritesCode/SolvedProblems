#include<stdio.h>
int main()
{
    long long int a, b, t;
    scanf("%lld",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(2*a <= b)
        {
			printf("%d\n",a);
		}
		else if(2*b <= a)
            {
			printf("%d\n",b);
		}
		else{
			printf("%d\n",(a+b)/3);	
		}
 
    }
    return 0;
}