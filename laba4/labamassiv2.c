#include <stdio.h>
#include <math.h>

int main(void)
{
  int s;//размер массива
  int a[s];//массив
  int b;//счетчик массива
  int sum = 0;//сумма
  scanf("%d", &s);//сканирование размера
  for(b=0;b<s;b++)
  {
    printf("vvedite element massiva %d \n",b);//ввод массива
    scanf("%d",&a[b]);
  }
  for(b=0;b<s;b++)
  {
    if (a[b]>0)//если элемент больше 0
    {
      b++;//увеличиваем b на 1
      while(a[b]<0)//если лемент меньше 0
      {
        if(a[b]<=0) //проверяем еще раз
          sum = sum+a[b];//суммируем
      b++;//увеличиваем b на 1
      }
    }
    printf("summa %d \n", sum);
  }
}