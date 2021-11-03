#include<stdio.h>
int main()
{
    int t, n, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        printf("1 %d\n", n-1);
    }
    return 0;
}