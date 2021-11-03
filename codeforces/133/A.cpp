#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int len, i;
    scanf("%s",a);
    len=strlen(a);
    for(i=0; i<len; i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9'||a[i]=='++'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}