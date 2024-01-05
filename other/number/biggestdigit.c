#include <stdio.h>
/*Girilen bir tam saymm hanelerindeki en büyük sayi bulma.*/


int main(){
    int number,digit;
    int max=0;
    printf("Bir sayi giriniz:");
    scanf("%d",&number);
    while (number>9)
    {
        digit=number%10;
        if (digit>max)
          max=digit;

      number=number/10;
    }
    digit=number%10;
    if (digit>max)
          max=digit;


    printf("en buyuk sayi: %d",max);
return 0;
}