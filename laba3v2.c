#include <math.h>
#include <stdio.h>
#define EPS 1E-4 //переменная для точности

double ax(double x)//функция
{
int i = 1;
double R;
double t =1/(3*x);//первое число
double sum = t;//сумма равна t
while(fabs(t)>=EPS) //пока модуль t больше или равен точности
{
  i++;
  R=(1/((2*i+1)*2*i*x));//уравнение
  t*=R;//умнажаем первое число на уравнение
  sum+=t;//складываем в сумму
}
return sum;
}

int main(void)
{
  double x;
  double b;
  printf("==========================\n");
  printf("|     x     |     y(x)   |\n");
  printf("==========================\n");
  for(b=0.2;b<=2.1;b+=0.1)
  {
    printf("|   %2.1lf     | %2.6lf   |\n", b,ax(b));  //вызов функции
  }
   printf("==========================\n");
   return 0;
}