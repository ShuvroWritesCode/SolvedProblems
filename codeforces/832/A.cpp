#include <stdio.h>
int main(){
    long long int n,k;
    scanf("%lld %lld", &n, &k);
        if(((n/k)%2) == 0){
            printf("NO\n");
        }
        else if(((n/k)%2) != 0){
            printf("YES\n");
        }
    return 0;
}
