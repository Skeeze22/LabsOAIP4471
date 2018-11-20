#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define n 100 //длинна строки
int main(void) 
{ 
    int i,j,schet; 
    char S[n]; //массив основной строки 
    char Str1[n]; //массив первой строки
    char Str2[n]; //массив второй строки
    char *istr,*jstr; //указатели на строки
    printf("Введите строку S не более длины %d:",n); 
    gets(S); //ввод основной строки
    printf("Введите строку Str1:"); 
    gets(Str1); //ввод первой строки
    printf("Введите строку Str2:"); 
    gets(Str2); //ввод второй строки
    while(istr != '\0') //пока istr не конец строки
    { 
        istr = strstr(S,Str1); //поиск в строке s строки str1 и присваивание в istr начальной позиции str1 
        for(jstr=istr+strlen(Str1);*jstr!='\0';jstr++) //jstr равен istr + длинна строки str1, пока jstr не дошел до конца, увеличивать jstr
        { 
            *(jstr-strlen(Str1))=*jstr; //jstr - длинна str1 = указателю на jstr
        } 
        *(jstr-strlen(Str1))='\0'; //jstr - длинна str1 = концу строки
        puts(S); //вывод S
        for(j=strlen(S);j>=0;j--) //для j присвоить длинну S, пока j больше 0, уменьшать j
        { 
            S[strlen(Str2)+j]=S[j]; //S с номером элемента [размер строки str2 +j] присвоить s с j позицией
        }    
        for(i=0;i<strlen(Str2);i++) //для i меньше длинны Str2 увеличивать i
            *(istr+i)=Str2[i]; //istr +i  присвеиваем i-й элемент Str2
        puts(S); //вывод S
    } 
}