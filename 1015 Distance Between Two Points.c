#include <stdio.h>
#include <math.h>
int main ()
{
    double x1,y1,x2,y2,a,b,c,d,e;
    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);
    a=(x2-x1);
    b=pow(a,2);
    c=(y2-y1);
    d=pow(c,2);
    e=sqrt(b+d);
    printf("%.4lf\n",e);
    return 0;
}
