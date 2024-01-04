#include <stdio.h>
/*Write C Program to Concatenate Two Strings.
İki Stringi Birleştirecek C Programı Yazın.*/

void main(){
    char str1[100],str2[100];
    printf("Enter first string\n");
    gets(str1);
    printf("Enter second string\n");
    gets(str2);
    puts(str1),puts(str2);
}