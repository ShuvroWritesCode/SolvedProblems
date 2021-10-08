#include <stdio.h>
int main(){
    int x, y, z, i;         //need
    scanf("%d %d %d", &x, &y, &z);
    int a, b, c;            //supply
    scanf("%d %d %d", &a, &b, &c);
    if(x<=a){
        if(y <= a+b-x){
            if(z <= a+b+c-x-y){
                printf("YES\n");
            }
            else printf("NO\n");
        }
        else printf("NO\n");
    }
    else printf("NO\n");
    return 0;
}
