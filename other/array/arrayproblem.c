/*Öğrencilerin notlarını içeren aşağıdaki tabloya sahip olduğunuzu varsayın. Her öğrencinin ortalamasını
hesaplayan ve sonucu ortalama sütununa (satır indeks 4) kaydeden bir C programı yazın. Ardından, en yüksek
ortalamayı alan öğrenciyi (kimlik ve ortalama) yazdırın. 2 boyutlu diziyi aşağıdaki tabloyu kullanarak ilk eğer
ataması yapın (sütun başlıkları dahil olmayacak). (Assume you have the following table containing students’
grades. Write a C program to calculate the average of each student and store the result in the average column
(row index 4). Then print the student (Id and average) whose get the highest average. Initialize the 2- dimensional
array from the table below (columns titles are not included).)


id Math Prog. Phys. Average
1   67    76   55      0
2   34    79   76      0
3   56    68   57      0
4   66    89   65      0*/
#include <stdio.h>

void main(){
    float a[3][4]={1,67,76,55,0,2,34,79,76,0,3,56,68,57,0,66,89,65,0},sum,max;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            sum=0;
            sum=sum+a[i][j];
        }
        a[i][4]=sum/3;
        printf("%f",a[0][4]);
        
        
    }
    max=a[0][4];
    for (int i = 1; i <4; i++)
    {
        if (a[i][4]>max)
        {
            max=a[i][4];
        }
        
    }

    printf("%.2f",max);
    
    
    
    


    



    
    

}