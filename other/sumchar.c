#include <stdio.h>
/*Klavyeden girilen maksimum 20 karakterli kelimedeki sesli harflerin
kelimenin toplam karakter sayısına göre yüzde oranını hesaplayan
programın algoritma ve akış diyagramını oluşturunuz.Vowels in words with a maximum of 20 characters entered from the keyboard
calculates the percentage of the word based on the total number of characters
Create the algorithm and flow diagram of the program.*/

void main(){
int k=0,j=0;
char str[21];
printf("Enter a word\n");
gets(str);
while (str[k]!='\0')
{
    if (str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u')
    {
        j++;
    }
    
    k++;
}
printf("Length of word: ");
printf("%d\n",k);
printf("number of vowels: ");
printf("%d\n",j);
float av = k/j;
printf("%.2f",av);



}