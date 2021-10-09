#include <stdio.h>
int main(){
    int s;
    scanf("%d", &s);
    if((s%5) == 0){
        printf("%d\n", s/5);
    }
    else if((s%5) > 0){
        printf("%d\n", (s/5)+1);
    }
    return 0;
}
