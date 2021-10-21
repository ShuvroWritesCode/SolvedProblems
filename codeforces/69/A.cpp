#include<stdio.h>

int main(){
    int n, a[100], b[100], c[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        scanf("%d", &b [i]);
        scanf("%d", &c [i]);
    }
    
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for(int i = 0; i < n; i++){
        
        sum1 += a[i];
        
        sum2 += b[i];
        
        sum3 += c[i];
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
