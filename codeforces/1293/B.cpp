#include<stdio.h>
int main()
{
  int n, i;
  double sum=0;
  scanf("%d", &n);
  for(i=1; i<=n ;i++)
  {
    sum = sum + 1.0/i;
  }
  printf("%f\n", sum);
  return 0;
}