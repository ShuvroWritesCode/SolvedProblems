#include <stdio.h>

int main(){
    long long int k, n, w, borrow, i, total;
    scanf("%lld %lld %lld", &k, &n, &w);
    
    while (i <= w) {
            total += i*k;
            ++i;
        }

//    for(i = 0; i <= w; ++i){
//        total = 0;
//        total += i*k;
//    }
//
//    printf("%d\n", total);
    
    borrow = total - n;
    if(borrow <= 0){
        printf("0\n", borrow);
    }
    else if(borrow > 0){
        printf("%lld\n", borrow);
    }
    return 0;
}

