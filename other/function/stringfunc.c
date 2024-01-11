#include <stdio.h>
/*Fonksiyona gönderilen string içerisindeki karakterleri alfabetik sıraya sokan programı yazınız*/
#include <stdio.h>

void fonk(char a[]);
int main() {
    char str[80];
    printf("Enter the string:");
    gets(str); //enes
    fonk(str);
    return 0;
}

void fonk(char a[]) {
    char temp;
    int length = 0;

    while (a[length] != '\0') {
        length++; //enes lenght=4
    }

    for (int i = 0; i < length - 1; i++) { 
        for (int j = 0; j < length- 1; j++) {
            if (a[j] > a[j + 1]) { //enese
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp; //eeens
            }
        }
    }
    puts(a);

}
