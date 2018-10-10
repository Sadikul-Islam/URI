#include<stdio.h>
int main ()
{
    int X,i;
    scanf("%d", &X);
    if(X%2==0)
    {
        X=X+1;

        for(i=X;i<=X+10;i=i+2)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for(i=X;i<=X+10;i=i+2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
