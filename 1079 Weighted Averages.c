#include<stdio.h>
int main ()
{
    int N,i;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        float a,b,c;
        scanf("%f %f %f", &a,&b,&c);
        printf("%.1f\n",((a*2)+(b*3)+(c*5))/10);
    }

    return 0;
}
