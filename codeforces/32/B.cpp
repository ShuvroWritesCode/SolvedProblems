#include<stdio.h>
int main()
{
    char a[201];
    scanf("%s",a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            printf("0");
        }
        else if(a[i]=='-'&&a[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else 
        {
            printf("2");
            i++;
        }
    }
    return 0;
}