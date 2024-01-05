#include <stdio.h>
/*Girilen sayının asal olup olmadığını bulan algoritmayı yazınız*/

int main() {
    int sayi,sayac;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    sayac=2;
    while(sayac<sayi)
    {
     if(sayi%sayac==0)
     {
         printf("asal sayi degildir");
         break;
     }
     sayac++;
     if(sayac==sayi)
     {
         printf("asaldir");
         
     }
    }
    

    return 0;
}