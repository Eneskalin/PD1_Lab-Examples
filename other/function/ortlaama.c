#include <stdio.h>
/*kullanicidan ogrenic notlarina karsilik gelen 10 adet sayi alan ve 
bu sayilarin ortalamasini bulan bir program yaziniz.Kullanicidan sayi okuma 
isi yapma ve ortalama isini gerceklestirmek icin iki ayri fonksyon yaziniz.
Sayi okuma isini kullanicidanNotlariOku isimli bir fonksiyon icersiinde yapiniz
Bu fonksiyon notlarin okunacagi kullanicidan 10 adet sayi degeri girmesini istesin ve her bir
deger dizinin siradaki elemani olsun.

Ortlama bulma isini yapan fonksiyon adi ise ortalamaBul olsun.Bu fonksiyon da iki adet parametre alsin.
Ilk parametre bir dizi olsun.Ikinci parametre ise dizinin ekeman sayisi olsun.Foksiyon kendisine gelen
parametreleri kullanarak dizinin tum elemanlarini toplasin ve eleman sayisina bolsun.Buldugu sonucu bir double icin
de dondursun.
*/
void kullanicidanNotlariOku(int a[],int x);
double ortalamaBul(int a[],int x);

int main(){
    int notlar[10];
    int n=10;
    kullanicidanNotlariOku(notlar,n);
    double av=ortalamaBul(notlar,n);
    printf("%lf",av);
}

void kullanicidanNotlariOku(int a[],int x){
    for (int i = 0; i < x; i++)
    {
        printf("%d. notu giriniz:",i+1);
        scanf("%d",&a[i]);
    }
}
double ortalamaBul(int a[],int x){
    int sum=0;
    for (int i = 0; i < x; i++)
    {
        sum+=a[i];
    }
    double k=sum/x;
    return k;
    
}