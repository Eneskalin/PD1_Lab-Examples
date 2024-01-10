#include <stdio.h>
/*Karenin alanını hesaplayan fonksiyonu hazırlayıp mainde kullanan programı yazınız.*/

int kareAl(int);

int main(){
    int a,sonuc;
    printf("Karenin uzunlugunu giriniz:");
    scanf("%d",&a);
    printf("%d",kareAl(a));
    
    return 0;    
}
int kareAl(int a){
    return a*a;
}
