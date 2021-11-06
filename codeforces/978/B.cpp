#include<stdio.h>
#include<string.h>

int main()
{
    int n, count=0;
    scanf("%d", &n);
    char a[n+1];
    scanf("%s", a);
    for(int i=0; i<n; i++)
    {
        if(a[i]=='x' && a[i+1]=='x' && a[i+2]=='x')
            count++;
    }
    printf("%d\n", count);
    return 0;
}
