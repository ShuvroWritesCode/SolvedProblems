#include<stdio.h>
#include <stdlib.h>
int main(){
    int i, j, array[6][6], posR, posC, ans = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
            if(array[i][j] == 1){
                posR = i;
                posC = j;
        }
    }
    }
    ans += abs(2 - posR)+ abs(2 - posC);
    printf("%d\n", ans);
    return 0;
}