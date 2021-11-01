#include<stdio.h>
int main()
{
    int n, a[31], b[31], count=0, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
        if(a[i]==b[j]){
            count++;
        }
    }
    printf("%d",count);
}