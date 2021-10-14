#include<stdio.h>
int main(){
    int i,j,p,q;
    int a,b;
    int k,l;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&k,&l);
 
    int x[a],y[b];
 
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);}
 
    for(j=0;j<b;j++){
        scanf("%d",&y[j]);}
 
    if(x[k-1]<y[b-l]){
        printf("YES");}
    else{
        printf("NO");}
    return 0;
}

