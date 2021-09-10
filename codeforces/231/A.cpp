#include <stdio.h>

int main() {
    int n, p, v, t, r;
    r=0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d%d", &p, &v, &t);
        r+=(p+v+t)/2;
    }
    printf("%d", r);
    return 0;
}
