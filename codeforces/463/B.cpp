#include<stdio.h>
int main()
{
 
 long long int i,n,a,sum=0;
 scanf("%lld",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%lld",&a);
     if(a>sum)
     {
         sum=a;
     }
 }
 printf("%lld",sum);
 return 0;
}