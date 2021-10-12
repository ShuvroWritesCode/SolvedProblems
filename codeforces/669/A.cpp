#include<stdio.h>
int main()
{
    int gift,x;
    scanf("%d", &gift);
    if(gift%3==0)
    {
        x=(gift/3)*2;
    }
    else{
        x=((gift/3)*2)+1;
    }
    printf("%d", x);
return 0;
}
