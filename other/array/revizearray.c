#include <stdio.h>
/*Eleman değerleri verilmiş 7 elemanlı bir sayı dizisinde tekrarlanan
sayıların ilk yazılanı dışında kalanları kaldırarak başa doğru öteleyen
programın algoritma ve akış diyagramını oluşturunuz.Repeated in a 7-element number array given element values
which moves the numbers towards the beginning by removing all the numbers except the first one written
Create the algorithm and flow diagram of the program.*/

void main(){
    int a[7]={1,7,3,1,5,7,7};
    for (int i = 0; i <7; i++)
    {
        for (int j = 1; j <7; j++)
        {
            if (a[i]==a[j])
            {
               
                a[j+1]=a[j];
            }
            
        }
        
    }

    for (int i = 0; i <7; i++)
    {
        printf("%d",a[i]);
    }
    
    

}