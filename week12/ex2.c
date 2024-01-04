#include <stdio.h>
/*Fonksiyona gönderilen string içerisindeki karakterleri alfabetik sıraya sokan programı yazınız.
Write a program that puts the characters in the string sent to the function in alphabetical order.
Örnek giriş : “Ahmet merhaba”
Sonu : “Aaabe ehhmmrt”
*/

#include <stdio.h>

void main() {
    int k = 0;
    char str[40], gecici;

    printf("Enter a word:\n");
    gets(str);

    
    while (str[k] != '\0') {
        k++; //k=5
    }

    
    for (int j = 0; j < k - 1; j++) { //0 to 5
        for (int i = 0; i < k - 1; i++) { // 0 to 5
            if (str[i + 1] < str[i]) {
                gecici = str[i];
                str[i] = str[i + 1];
                str[i + 1] = gecici;
            }
        }
    }

    
    printf("%s\n", str);
}
