#include <stdio.h>
int main(){
    int n, ans = 1;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++){
        ans += i*4;
    }
    printf("%d\n", ans);
    return 0;
}
