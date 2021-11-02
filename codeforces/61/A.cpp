#include<stdio.h>
#include<string.h>
int main()
{
    char a[500], b[500];
    scanf("%s", a);
    scanf("%s", b);
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i] == b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}