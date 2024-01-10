#include <stdio.h>
/*Bir sayının çift mi tek mi olduğunu kontrol eden fonksiyonu ve kullanımını gösteren programı
yazınız.*/

int evenorodd(int);

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (evenorodd(a)==1)
    {
        printf("%d even number",a);
    }
    else
    {
        printf("%d odd number",a);
    }
}

int evenorodd(int a ){
    if (a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}