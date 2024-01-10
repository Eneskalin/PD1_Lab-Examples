#include <stdio.h>

int main() {
    int n;
    printf("Bir sayi giriniz:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d",n); printf(" bir cift sayi");
    }
    else{
        printf("%d",n); printf(" bir tek sayi");
    }
    
    
    return 0;
}