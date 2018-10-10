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
    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (a * a == b * b + c * c)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (a * a > b * b + c * c)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (a * a < b * b + c * c)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || b == c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
