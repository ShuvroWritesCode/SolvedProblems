#include<stdio.h>
#include<string.h>
 
int main(){
    char a[1001];
    int c,count=0,i=0,b[1001]={0};
    for(int i=0;i<1001;i++){
    scanf("%c",&a[i]);
    if(a[i]=='\n')
        break;
    }
    int len= strlen(a);
 
    for(int i=0;i<len-1;i++){
        if(a[i]>=97 && a[i]<=122){
            c=a[i];
            b[c-97]=1;
        }
    }
    for(int i=0;i<26;i++){
        if(b[i]==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
 
}