#include<stdio.h>
#define MAX 1000
int main(){
    int a[MAX],b[MAX],c[MAX];
    int n,d, sum = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        c[i]=sum-a[i]+b[i];
        sum=c[i];
    }
    int max=c[0];
    for(int i=1;i<n;i++){
        if(max>=c[i]){
            d=max;
        }
        else if(max<c[i]){
        d=c[i];
        max=c[i];
        }
    }
    printf("%d",d);
    return 0;
}