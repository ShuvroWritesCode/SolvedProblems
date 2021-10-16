#include <stdio.h>
int main(){
  int m;
  long long int n;
  scanf("%lld",&n);
 
  for(m=0; n>0; n/=10){
  if((n%10 == 4)||(n%10==7)){
      m++;}
  }
 
  if((m==4)||(m==7))
    printf("YES");
  else
    printf("NO");
  return 0;
}