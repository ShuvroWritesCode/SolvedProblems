#include<stdio.h>
int main()
{
    int t, a, b, i, n, j=0, temp;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d %d %d", &a, &b, &n);
         while(b <= n){
             if(b > a){
                 temp = b;
                 b = a;
                 a = temp;
                }
             b+=a;
             j++;
         }
         printf("%d\n",j);
        j=0;
        }
    return 0;
    }
