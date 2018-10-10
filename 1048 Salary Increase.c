#include<stdio.h>
int main ()
{
    float a;
    scanf("%f", &a);
    if(a>=0 && a<=400.01)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",((a*15)/100)+a,((a*15)/100));
    }
    if(a>=400.01 && a<=800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",((a*12)/100)+a,((a*12)/100));
    }
    if(a>=800.01 && a<=1200.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",((a*10)/100)+a,((a*10)/100));
    }
    if(a>=1200.01 && a<=2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",((a*7)/100)+a,((a*7)/100));
    }
    if(a>2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",((a*4)/100)+a,((a*4)/100));
    }

    return 0;
}
