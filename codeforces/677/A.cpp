#include<stdio.h>

int main(){
    int n, h, a[1000];
    scanf("%d %d", &n, &h);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(int i = 0; i < n ; i++){
        if(a[i] <= h){
            count ++;
        }
        else if(a[i] > h){
            count = count + 2;
        }
    }
    printf("%d\n", count);
    return 0;
}