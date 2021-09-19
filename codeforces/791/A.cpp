#include<stdio.h>
int main(){
    int a, b, n=1;
    scanf("%d %d", &a, &b);
    for(;;n++){
        a = a*3;
        b = b*2;
        if(a>b) break;
    }
    printf("%d", n);
    return 0;
}
