#include <stdio.h>
#include <stdlib.h>

int main()
{
    long police=0,unNoticedCrime=0,n,i;
    int x;
    
    fscanf(stdin,"%ld",&n);
    if(n>=1 && n<=100000){
           for(i=0;i<n;i++){
                 fscanf(stdin,"%d",&x);
                                         
                 switch (x){
                      case -1: if(police > 0) --police; else ++unNoticedCrime;
                               break;
                                                     
                      default: police+=x;
                 }
           }
                        
    }
    fprintf(stdout,"%ld",unNoticedCrime);
    return(0);
}
