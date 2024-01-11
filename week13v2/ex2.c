#include <stdio.h>
/*Fonksiyona gönderilen string içerisindeki karakterleri alfabetik sıraya sokan programı yazınız.
Write a program that puts the characters in the string sent to the function in alphabetical order.
Örnek giriş : “Ahmet merhaba”
Sonu : “Aaabe ehhmmrt”*/
void alfabe(char str[]);

int main(){
    char str[80];
    printf("Enter a string:");
    gets(str);
    alfabe(str);
}

void alfabe(char str[]){
    char temp;
    int k=0,n=0;
    
    while (str[k]!='\0')
    {
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j <k-1; j++)
        {
            if (str[j]>str[j+1])
            {
                
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
            
        }
    }
    
     
}