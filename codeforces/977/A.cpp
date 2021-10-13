#include<stdio.h>
int main(){
    long int n, k, result;
    int i = 1;
    scanf("%ld %ld", &n, &k);
    
    for(;i <= k; i++)
    {
        if(n%10 == 0){
            n = n/10;
        }
        else if (n%10 != 0){
            n = n - 1;
        }
    }
    printf("%ld\n", n);
    return 0;
}