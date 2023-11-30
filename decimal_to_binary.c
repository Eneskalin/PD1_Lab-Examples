#include <stdio.h>
#include <math.h>
//Gİrilen bir decimal değerini binrary'e çevirin.

int main() {
    int number,i,top;
    printf("Bir decimal değeri giriniz:");
    scanf("%d",&number);
    i=0;
    top=0;
    while(number>0)
    {
        top+=((number%2)*(pow(10,i)));
        number=number/2;
        i++;
    }
    
    printf("%d",top);
    

    
    return 0;
}