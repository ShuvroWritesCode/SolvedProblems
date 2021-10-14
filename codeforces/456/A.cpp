#include<stdio.h>
int main()
{
    long long n,a,b,i;
    
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld%lld",&a,&b);
        
        if(a==b){
            
 
        }
        else{
            printf("Happy Alex");
            goto end;
        }
    }
    printf("Poor Alex");
 end:
 return 0;
}