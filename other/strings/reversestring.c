#include <stdio.h>

/*Klavyeden girilen iki kelimeden ikincinin sonuna birinci kelimenin tersini ekleyerek ekrana yazdıran
programı C dili ile yazınız. Örnek çalışma ekranı aşağıda verilmiştir.Write a C program that takes two words from keyboard and prints the reverse of first word after
second word. Sample program execution is as shown below.*/

void main(){
    int k=0;
    char str[100],str2[100],temp;
    printf("Enter first strings: ");
    gets(str);
    printf("Enter second strings: ");
    gets(str2);
    while (str[k]!='\0')
    {
        k++;
        
    }
    for (int i = 0; i < k/2; i++)
    {
        temp=str[i];
        str[i]=str[k-i-1];
        str[k-i-1]=temp;
    }
    puts(str2);
    puts(str);
    
    

    
    
    
}