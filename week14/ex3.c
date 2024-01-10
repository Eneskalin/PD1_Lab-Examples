#include <stdio.h>
/*Verilen bir cümledeki kelimelerin sadece son harflerini yazdıran bir fonksiyon yazınız.
Örnek: Adana Taş Köprü Balcalı
> aşüı
*/
void lastword(char str[]);

int main(){
    char str[80];
    printf("Enter a string:");
    gets(str);
    lastword(str);
    return 0;
}

void lastword(char str[]){
    int i;
    for (i = 0; str[i] !='\0'; i++)
    {
        if (str[i]==' ')
        {
            printf("%c",str[i-1]);
        }
        
    }
    
    printf("%c",str[i-1]);
    
}