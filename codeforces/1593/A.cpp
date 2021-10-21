#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    
    for(int i = 0; i < t; i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int A,B,C;
        if(a>b && a>c){
            A=0;
            B=a-b+1;
            C=a-c+1;
        }
        else if(b>a && b>c){
            A=b-a+1;
            B=0;
            C=b-c+1;
        }
        else if(c>b && c>a)
        {
            A=c-a+1;
            B=c-b+1;
            C=0;
        }
        else if(a==b){
            A=1;
            B=1;
            C=a-c+1;
        }
        else if(b==c){
            A=b-a+1;
            B=1;
            C=1;
        }
        else if(c==a){
            A=1;
            B=a-b+1;
            C=1;
        }
        else if(a==b && b==c){
            A=1;
            B=1;
            C=1;
        }
        printf("%d %d %d\n",A,B,C);
    }
    return 0;
}