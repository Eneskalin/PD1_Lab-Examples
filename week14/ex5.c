#include <stdio.h>
/*Klavyeden girilen bir sayının asal sayı olup olmadığını kontrol eden fonksiyon yazınız.
Örnek: 101
> 101 sayisi asaldir.*/
int asal(int a);

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (asal(a)==1)
    {
        printf("%d Prime number",a);
    }
    else{
        printf("%d Not prime number",a);
    }
    return 0;
}
int asal(int a){
    int flag=1;
    for (int i = 2; i < a/2; i++)
    {
        if (a%i==0)
        {
            flag=0;
        }
        
    }
    if (flag==1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
    
}