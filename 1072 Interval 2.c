#include<stdio.h>
int main ()
{
    int a,i,n,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=10 && a<=20)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    printf("%d in\n%d out\n",b,c);

    return 0;
}
