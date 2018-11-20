#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 3 //размер массива
#define m 3 //размер массива
int main()
{
    int a[n][m];//двумерный массив
    int i,j,k=0;//счетчики
    int o=0;
    int nulevoustolbec[o];//массив хранящий нулевой столбце
    for  (i=0;i<n;i++)
    {
        for  (j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);//вводим массив
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");//выводим массив
    }
    for (i=0;i<n;i++)
    { 
        for (j=0;j<m;j++)
        {  
            if (a[i][j]==0) //если элемент массива равен 0
            { 
  	            o++; //увеличиваем o на 1
  	            if (o<=1) //если он равен 1
  	            {
  		            k=j; //запоминаем столбец
  	            }
            }
        }
    }
    if(o==0) //если o осталось равным 0
        printf("nulevih elementov net"); //0 нет
    else  //если o не равно 0
        printf("nomer stolbca soderzhashego nulevoi element = %d",k);//0 в столбце k
//--------------------------------------------------------------------
    int flag, sum, localsum, index=0,obmen;
    flag=0;
    sum=0;
    for (i=0; i<n; i++)
    { 
        localsum=0;
        for (j=0; j<m; j++)
        {
            if ((a[i][j]<0)&&((a[i][j]%2)==0)) //если элемент массива больше 0 и элемент четный
            {
                localsum+=(a[i][j]*(-1));//присваиваем в сумму этот элемент умноженый на -1
            }
        }
        if ((localsum<sum) && (localsum!=0))//если локальная сумма меньше суммы и не равна 0
        {
            sum=localsum;//сумме присваиваем локальную сумму
            index=i;//сохраняем индекс i
        }
        if ((flag==0)&&(localsum!=0)) //если флаг равен 0 и локальная сумма не равна 0
        {
            sum=localsum;//сумме присваиваем локальную сумму
            index=i;//сохраняем индекс i
            flag=1;//флаг делаем не равным 0
        }
    }
    for (j=0; j<m; j++)
    {
        obmen=a[0][j];//обмен в нулевой строке j элемент
        a[0][j]=a[index][j];//элементу присваиваем a с сохраненным индексом i и столбоцом j
        a[index][j]=obmen;//a с сохраненным индексом i и столбоцом j присваиваем элемент из 0 строки с индексом j
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%3d ", a[i][j]);//выводим массив
        }
        printf("\n");
    }
//---------------------------------------------------------------------
//я не помню что сдесь происходит, по этому комментарии не точные
    int massivotric[m],z,l=0,levayperemen;
    for (i=0;i<m;i++)
    { 
	    massivotric[i]=0;//обнуляем все элементы одномерного массива
    }
    for (j=0;j<m;j++)
    { 
	    z=0;
	    i=0;
        while ((i<n) && (z!=1))//пока i меньше n и z не равно 1
        {  
            if (a[i][j]<0) //если элемент массива меньше 0
            { 
  	            z=1;//z присваиваем 1
  	            for(levayperemen=0;levayperemen<n;levayperemen++)//левая переменная является новым индексом i
  	            {
  	                massivotric[l]+=a[levayperemen][j];//левая переменная скорее всего является l , я не помню 
  	            }
            }
  	        if(z==1)//если z равно 1
  	        {
  		        printf("summa v stolbces s otricaniem %d = %d\n",j,massivotric[l]);//выводим сумму в столбце с отрицанием 
  		        printf("%d",l);
  		        l++;
  	        }
  	        i++;
        }
        if (z==0)//если z равно 0
        {
  	        printf("summa v stolbces s otricaniem %d = 0\n",j);//выводим сумму
        }
    }
}