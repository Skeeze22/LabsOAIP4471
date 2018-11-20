#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int s;//размер массива
  int a[s];//массив
  int b;//счетчик
  int c;//номер элемента
  scanf("%d", &s);//ввод размера массива
  for(b=0;b<s;b++)
  {
    printf("vvedite element massiva %d \n",b);
    scanf("%d",&a[b]);//ввод элемента массива
  }
  int i; //переменная для сохранения наибольшего
  for(b=0;b<s;b++)
  {
   if (fabs(a[b])>i)//если модуль числа больше предыдущего наибольшего
   {
     i = fabs(a[b]);//присваиваем новое наибольшее число с модулем
     c = b;//сохраняем его номер
   }
  }
 printf("samoe bolshoe %d \n", i);
 printf("nomer %d \n", c);
}