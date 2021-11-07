#include<stdio.h>
int main()
{
    int s, n;
    scanf("%d %d", &s, &n);
    int x[n], y[n];
    int *min;
    min=x; 
    for( int i=0; i<n ; i++ ){
        scanf("%d %d", &x[i], &y[i]);
    }
    for( int j=0; j<n ; j++ )
    {
        for( int i=0; i<n ; i++) 
        {
            if ( x[i] <= *min )
            {
                min = &x[i]; 
            }
        }
        if(s>*min)
        {
            s += y[ (int)(min-&x[0]) ];
            *min = 100000;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}