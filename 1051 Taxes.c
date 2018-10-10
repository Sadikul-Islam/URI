#include<stdio.h>
int main ()
{
   float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
   scanf("%f", &a);
   if(a>=0&&a<=2000.00)
   {
       printf("Isento\n");
   }
   if(a>=2000.01&&a<=3000.00)
   {
       b=a-2000.00;
       c=(b*8)/100;
       printf("R$ %.2f\n",c);
   }
   if(a>=3000.01&&a<=4500.00)
   {
       d=a-3000.00;
       e=(d*18)/100;
       i=e+80;
       printf("R$ %.2f\n",i);
   }
   if(a>4500.00)
   {
       j=a-4500.00;
       k=(j*28)/100;
       p=k+270+80;
       printf("R$ %.2f\n",p);
   }

    return 0;
}
