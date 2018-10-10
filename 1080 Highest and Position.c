#include<stdio.h>
int main ()
{
    int i,a=0,b=0,c,N;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&N);
        b++;
        if(N>a)
        {
            a=N;
            c=b;
        }
    }
    printf("%d\n", a);
    printf("%d\n", c);

    return 0;
}
