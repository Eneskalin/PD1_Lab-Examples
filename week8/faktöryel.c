#include <stdio.h>
/*Girilen sayının faktöryelini hesaplama*/

int main() {
    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    int faktor=1;
    while (sayi>0)
    {
        faktor=faktor*sayi;
        sayi--;
        
    }
    printf("sonuc=%d" ,faktor);
    
    return 0;
}