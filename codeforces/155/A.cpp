#include<stdio.h>
int main(){
    int n, a, count=0, greatest, smallest;
    scanf("%d",&n);
    for(int i=0;i<1;i++)
    {
        scanf("%d",&a);
        greatest=a;
        smallest=a;
    }
    for(int i=1;i<n;i++)
    {
    scanf("%d",&a);
        if(a>greatest){
            count++;
            greatest=a;
        }
        else if(a<smallest){
            count++;
            smallest=a;
        }
    }
    printf("%d",count);
    return 0;
}