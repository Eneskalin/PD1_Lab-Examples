#include <stdio.h>
/*Girilen cümleyi parametre olarak alıp içerisindeki kelime sayısını bulan fonksiyonu yazınız.*/
int strlen(char a[]);
int main(){
    char str[80];
    printf("Enter a string:");
    gets(str);
    printf("%d",strlen(str));


}
int strlen(char a[]){
    int k=0;
    while (a[k]!='\0')
    {
        k++;
    }
    return k;
    
}