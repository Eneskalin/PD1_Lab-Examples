#include <stdio.h>

/*sayiKontrol isimli bir fonksiyon yazınız Bu fonksiyon kendisine gönderden sayının basamaklari  birbirine eşitse 1 değilse 0 
döndürsün Yazdğınız fonksiyonu A dizisindeki sayılardan basamakları aynı olan ve olmayanları bulmak için kullanın
Kullanılacak A dizisi
A= 233, 45, 777,81, 99999, 35, 90,88 11,61*/
#include <stdio.h>

int sayiKontrol(int num);

int main(){
    int a[] = {233, 45, 9999, 35, 90, 88, 11, 61};
    
    for (int i = 0; i < 8; i++) {
        if (sayiKontrol(a[i]) == 1) {  
            printf("%d\n", a[i]);
        }
    }
    
    return 0;
}

int sayiKontrol(int num) {
    int digit, temp, opposite = 0;
    
    temp = num; 
    
    while (num > 0) {
        digit = num % 10;
        opposite = opposite * 10 + digit;
        num = num / 10; 
    }
    
    return (temp == opposite) ? 1 : 0;
}

    



