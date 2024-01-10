#include <stdio.h>

/*sayiKontrol isimli bir fonksiyon yazınız Bu fonksiyon kendisine gönderden sayının basamaklari  birbirine eşitse 1 değilse 0 
döndürsün Yazdğınız fonksiyonu A dizisindeki sayılardan basamakları aynı olan ve olmayanları bulmak için kullanın
Kullanılacak A dizisi
A= 233, 45, 777,81, 99999, 35, 90,88 11,61*/
int sayiKontrol(int array[]);

void main(){
    int a[]={233,45,9999,35,90,88,11,61};
    
}

int sayiKontrol(int array[]){
    int digit,temp,opposite=0;
    for (int i = 0; i < 8; i++)
    {
        temp=array[i];
        while (array[i]>0)
        {
            digit=array[i]%10;
            opposite=opposite*10+digit;
        }
        return (temp == opposite) ? 1 : 0;
        
        
    }
    

}
    



