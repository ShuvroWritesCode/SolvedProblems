int main()
{
    int n,div;
    scanf("%d",&n);
    div=n/2;
    if(n%2 == 0)
    {
       div=n/2;
       printf("%d\n",div);
       for(int i=1;i<=div;i++)
        printf("2 ");
    }
    else
    {
       printf("%d\n",div);
       for(int i=1;i<div;i++)
       {
        printf("2 ");
       }
       printf("3");
    }
    return 0;
}