#include <stdio.h>
int main()
{
    float H,l,A,B;
    scanf("%f%f",&H,&l);
    A=(l*l - H*H);
    B=(2.f*H);
    printf("%f\n", A / B);
    return 0;
}