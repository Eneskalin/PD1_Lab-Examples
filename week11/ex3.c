#include <stdio.h>

void main(){

    /*Bir sınıftaki 10 öğrencinin boy ve kilo değerlerini iki boyutlu diziye klavyeden okuyarak
aktaran ve ortalama boy ve kilo değerlerini hesaplayarak ekrana yazdıran programı C dili ile
yazınız.
Write a program in C language that transfers the height and weight values of 10 students in
a class to a two-dimensional array by reading them from the keyboard and calculates the
average height and weight values and prints them on the screen.*/

int a[10][2],sum=0;
float average;
for (int i = 0; i <10; i++)
{   
    
    for (int j = 0; j <2; j++)
    {
        printf("%d . Student Lenght&Weight:\n",i+1);
        scanf("%d",&a[i][j]); 
        sum+=a[i][j];
    }
    average=(float)sum/2;
    printf("%.2f\n",average);
    sum=0;
}


}