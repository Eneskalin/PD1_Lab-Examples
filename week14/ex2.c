#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Klavyeden girilen iki sayı arasında rastgele sayı üretecek bir fonksiyon yazınız.*/

void generator(int,int);

int main(){
    int max,min;   
    printf("Enter first number:");
    scanf("%d",&max);
    printf("Enter second number:");
    scanf("%d",&min);
    generator(min,max);
    return 0;
}

void generator(int a,int b){
srand(time(NULL));
 
 printf("%d",b+rand() % (a - b + 1));
}