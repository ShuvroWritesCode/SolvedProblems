#include<stdio.h>
int main()
{
    int a,b,x;
scanf("%d %d",&a,&b);
 
if(a>=1 && b<=16 ){
    x=(a*b)/2;
    printf("%d",x);
}
return 0;
}