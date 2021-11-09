#include<stdio.h>
int main(){
    int n,a,b,f=0;
    scanf("%d",&n);
    if(n%2==0){
            a=n/2;
    for(int i=2;i<a;i++){
        if(a%i==0){
                f=1;
                b=a;
            break;
        }
    }
    if(f==0){
            a-=1;
    b=n-a;
    for(int i=2;i<b;i++){
        if(b%i==0){
                f=1;
            break;
        }
    }
    if(f==0){
        a-=1;
        b+=1;
    }
    }
    printf("%d %d",a,b);
    }
    else if(n%2==1){
            a=n/2;
            b=n-a;
    for(int i=2;i<a;i++){
        if(a%i==0){
                f++;
            break;
        }
    }
    for(int i=2;i<b;i++){
        if(b%i==0){
                f++;
            break;
        }
    }
    if(f!=2){
            a-=1;
    b+=1;
    f=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
                f++;
            break;
        }
    }
    for(int i=2;i<b;i++){
        if(b%i==0){
                f++;
            break;
        }
    }
    }
    if(f!=2){
        a-=1;
        b+=1;
    }
        printf("%d %d",a,b);
    }
    return 0;
}