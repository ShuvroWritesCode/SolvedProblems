#include<stdio.h>
 
int main(){
 
    int n;
    int count=1;
    int a[100001];
 
    scanf("%d",&n);
 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==01 && a[i+1]==10){
            count++;
        }
        else if(a[i]==10 && a[i+1]==01){
            count++;
        }
    }
    printf("%d",count);
 
    return 0;
}