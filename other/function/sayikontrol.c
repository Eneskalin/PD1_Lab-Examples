#include <stdio.h>

/*sayiKontrol isimli bir fonksiyon yazınız Bu fonksiyon kendisine gönderden sayının basamaklari  birbirine eşitse 1 değilse 0 
döndürsün Yazdğınız fonksiyonu A dizisindeki sayılardan basamakları aynı olan ve olmayanları bulmak için kullanın
Kullanılacak A diziis
A= 233, 45, 777,81, 99999, 35, 90,88 11,61*/
int a[9]={233,45,777,81,9999,36,90,88,11,61},ilk,basamak;
int sayiKontrol(int);

int main(){
    



    return 0;
}

int sayiKontrol(int num){
    ilk = num%10;
    num=num/10;
    while (num>0)
    {
        basamak=num%10;
        if (ilk!=basamak)
        {
            return 0;
        }
        ilk = basamak;
        num/=10;
        
        
        
    }
    return 1;

    
    }
    



