#include <stdio.h>
/*5 elemanlı ve teksayi isimli bir dizi tanımlayınız.Dizi elemanlarının her birinin değerini kullanıcın girmesiin sağlayın.
Eğer kullanıcı çift sayı girerse programınız kullanıcıyı uyarsın.Kulanıcıdan değer okma işlemi sırasında döngü kullanınız.
Dizinin tüm elemanlarına dizi içeriğini başka bir döngü ile yazdırın.*/
void main(){
    int teksayi[5],i=0,sayi;
    while (i<5)
    {
        printf("Dizi elemanini giriniz:");
        scanf("%d",&sayi);
        if (sayi%2!=0)
        {
            teksayi[i]=sayi;
            i++;
        }
        else{
            printf("Hatali giriş\n");
        }
        
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n",teksayi[j]);
    }
    
    
    
}