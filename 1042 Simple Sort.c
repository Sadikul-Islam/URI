#include<stdio.h>
int main ()
{
    int a,b,c,hi,mid,low;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        mid=a;
        low=b;
    }
    else
    {
        mid=b;
        low=a;
    }
    if(mid>c)
    {
        hi=mid;
        if(low>c)
        {
            mid=low;
            low=c;
        }
        else
        {
            mid=c;
        }
    }
    else
    {
        hi=c;
    }
    printf("%d %d %d", hi,mid,low);

    return 0;
}
