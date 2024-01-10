#include <stdio.h>

/*Aşağıdaki iki boyutlu dizinin üst üçgen öğeleri ile alt üçgen öğelerini yer değiştiren bir C main programı yazın.
Diziyi fonksiyona referansla göndererek girdi ve çıktı matrisini tablo olarak yazdıracak bir fonksiyon yazınız. 
Fonksiyonun main içerisinde kullanımını da sağlayınız. (Write a C main program to swap upper diagonal elements 
with lower diagonal elements of the following two-dimensional array. Write a function to print the input and 
output array as table by passing the array to the function by reference. Make sure to use the function in main as 
well.

1|_ 2   3  4
5  6|_  7  8
9  10  11|_12
13 14  15  16|*/

void main(){
    int a[][4]={(1,2,3,4),(5,6,7,8),(9,10,11,12),(13,14,15,16)},temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < j; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("\n");
    printf("\n");
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }
    
    
}
