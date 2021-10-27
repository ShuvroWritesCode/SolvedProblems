#include<stdio.h>
#define MAX 50001
int main(){
    int t, x, y, n, a[MAX], b, k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&n);
        b=(n-y)/x;
        k=(b*x)+y;
        a[i]=k;
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}