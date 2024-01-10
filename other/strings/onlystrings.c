#include <stdio.h>
/*Write C Program to Remove all Characters in a String Except Alphabet.
Bir Dizedeki Alfabe Hariç Tüm Karakterleri Kaldıracak C Programı Yazın

Enter a string: p2'r-o@gram84iz./
Output String: programiz*/

int main(){
    int j=0;
    char str[100],output[100];
    printf("Enter a string: ");
    gets(str);


    for (int i = 0; str[i] != '\0'; i++)
    { 
        if (str[i]>='a'&&str[i]<='z' || (str[i]>='A'&& str[i]<='Z'))
        {
            output[j]=str[i];
            ++j;
        }
    }
    output[j]='\0';

    puts(output);

    return 0;
}