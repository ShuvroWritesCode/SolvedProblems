#include <stdio.h>
 
int main()
{
   int a,b,c,d,n;
   scanf("%d",&n);
 
   while(n--)
   {
       scanf("%d %d %d %d",&a,&b,&c,&d);
 
       int max1,max2,min1,min2;
 
       if (a>b)
       {
           max1=a;
           min1=b;
       }
       else
       {
           max1=b;
           min1=a;
       }
 
       if (c>d)
       {
           max2=c;
           min2=d;
       }
       else
       {
           max2=d;
           min2=c;
       }
 
       if (max1>min2 && max2>min1)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }
 
   }
   return 0;
}