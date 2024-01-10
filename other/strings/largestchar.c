#include <stdio.h>
/*Bir dizginin içerisinde en uzun tekrarlı harfi bulunuz. (35 puan)

Örneğin “aabbbcccccaaaaadddxxxxbbb” dizgisi için, “ccccc” veya “aaaaa” sonuçlarından birisini yada ikisini de döndüren kodu yazınız.
 Eşit uzunluk durumunda herhangi birisini veya hepsini döndürmeniz doğru kabul edilecektir.

Dizi (array) kullanarak kodlayınız 


TAMAMLANMADI!!!!!
*/

void main(){
    int k,counter[26]={0},max;
    char str[80];
    printf("Enter a string:");
    gets(str);
    while (str[k]!='\0')
    {
        if (str[k]>'a' && str[k]<'z')
        {
            counter[str[k]-'a']++;
        }
        k++;
    }
    max=counter[0];
    for (int i = 1; i < 26; i++)
    {
        if (counter[i]>counter[max])
        {
            max=i;
        }
    }
    printf("Most used char:%c",max+'a');
    
    

}
