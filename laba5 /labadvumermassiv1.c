#include <stdio.h>
#include <math.h> 
#define n 3 //размер массива

int main(void)
{
int i,b=0,k = 0,j,summa,a = 1;
int mas[n][n]={-3,12,1,-4,0,0,1,-2,1};//элементы массив
int sum[a];//массив для результатов
printf("Matrica\n");
for (i=0;i<n;i++) 
{
  for (j=0;j<n;j++)
  {
    printf("%2d ",mas[i][j]);//вывод массива в консоль
  }
  printf("\n");
}
for (i=0;i<n;i++)
{ 
  for (j=0;j<n;j++)
  {    
    if (mas[i][j]<0) //если элемент массива меньге 0
    { 
      a++; //увеличиваем а на 1
      b++; //увеличиваем b на 1
      summa=0; //сумма равна 0
      for(k=0;k<n;k++) 
      { 
        summa+=mas[i][k];//сумму увеличиваем за счет всех элементов строки
      }
    sum[b]=summa;//в массив суммы сохраняем сумму
    }
  }
}
for (b=1;b<a;b++)
{
  printf("Summa elementov stroki %d = %d \n",b,sum[b]); //выводим массив с суммами строк
}
return 0;
}
