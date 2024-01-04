#include <stdio.h>
/*Kullanıcının gönderdiği kelime içerisinde kaç tane sesli harf olduğunu bulan fonksiyonu yazınız.
Write the function that finds how many vowels are in the word sent by the user.
*/

int main(){
    int k=0,vowels=0;
    char str[40];
    printf("Enter a word\n");
    gets(str);
    while (str[k] !='\0')
    {
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        if (str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'u' || str[i]== 'o')
        {
            vowels++;
        }
        
    }
    printf("Vowels: %d",vowels);
    
    







    return 0;
}