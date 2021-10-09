#include <stdio.h>

int main(){
    int a, b, c, l, m, n, o, p, q;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    l = a+(b*c);
    m = a*(b+c);
    n = a*b*c;
    o = (a+b)*c;
    p = a+b+c;
    q = (a*b)+c;
    
    if(l>=m && l>=n && l>=o && l>=p && l>=q){
        printf("%d\n", l);
    }
    else if(m>=l && m>=n && m>=o && m>=p && m>=q){
        printf("%d\n", m);
    }
    else if(n>=l && n>=m && n>=o && n>=p && n>=q){
        printf("%d\n", n);
    }
    else if(p>=l && p>=m && p>=n && p>=o && p>=q){
        printf("%d\n", p);
    }
    else if(q>=l && q>=m && q>=n && q>=o && q>=p){
        printf("%d\n", q);
    }
    else
        printf("%d\n", o);
    return 0;
}
