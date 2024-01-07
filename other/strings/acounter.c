#include <stdio.h>
/* Klavyeden girilen bir string içerisindeki kelimelerde kaçar tane “a” karakteri geçtiğini bularak ekrana yazdıran
programın C kodunu yazınız (Not: Girilen string ifadenin tüm karakterlerinin küçük harf olduğunu varsayın.
Programın örnek çalışma ekranı aşağıda verildiği gibi olmalıdır).
Write a C program that prints how many character of “a” included in the each word of a string entered from
keyboard (Note: It is assumed that all characters of the input string is lowercase letters. Sample execution of the */
int main(){
    int counter=0;
    char str[100];
    printf("Enter a string: ");
    gets(str);

    for (int  i = 0; str[i] != '\0'; i++)
    {
        if (str[i]=='a')
        {
            counter++;
        }
        else if (str[i]==' ')
        {
            printf("Word includes %d number of char a \n",counter);
            counter=0;
        }
        
        
    }
    

}