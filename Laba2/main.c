#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) 
{
    printf("введите число n\n");
        int n;
        int x;
        double f = 0;
            scanf("%d",&n);
            printf("============================\n");
            printf("|      x     |     Y(x)    |\n");
            printf("============================\n"); 
  for (x=1;x<=n;x++) 
    {
         printf ("|  %lf  |  %lf   |\n",x,f(x)); //вызов функции 
    }
            printf("============================\n");
            return (0);
} 
double f(int n) 
{
    double z,rez=0;
    int i=1;
    z = sin((double)i);//синус i
        for (i=2;i<=n;i++)
        {
            rez = z +(1/sin(i));//результат
        }
    return(rez);
}