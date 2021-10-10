#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    int bill = 0;
    if (n >= 100) {
        int temp = n / 100;
        bill += temp;
        n -= (temp * 100);
    }
    if (n >= 20) {
        int temp = n / 20;
        bill += temp;
        n -= (temp * 20);
    }
    if (n >= 10) {
        int temp = n / 10;
        bill += temp;
        n -= (temp * 10);
    }
    if (n >= 5) {
        int temp = n / 5;
        bill += temp;
        n -= (temp * 5);
    }
    if (n >= 1) {
        int temp = n / 1;
        bill += temp;
        n -= (temp * 1);
    }
    printf("%d\n", bill);
 
    return 0;
}



