#include <stdio.h>
/*Klavyeden girilen sayını küpünü bulan fonksiyon*/
int kupbul(int);

int main(){
    int s;
    printf("Bir sayi giriniz:\n");
    scanf("%d",&s);
    printf("%d",kupbul(s));


    return 0;
}

int kupbul(int sayi){
    int sonuc = sayi*sayi*sayi;
    return sonuc;
}