#include <stdio.h>
int main ()
{
    int a,b,d,e;
    float c,f,x;
    scanf("%d %d %f\n %d %d %f", &a, &b, &c, &d, &e, &f);
    x=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2f\n", x);

    return 0;
}
