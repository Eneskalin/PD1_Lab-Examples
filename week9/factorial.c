#include <stdio.h>

int main() {
    /*Write a C program for computing factorial N (N!)*/
    int n;
    int carp = 1;
    printf("Bir sayi giriniz:");
    scanf("%d",&n);
    int counter =1;
    while (counter<=n)
    {
        carp=carp*counter;
        counter++;
    }
    printf("%d",carp);
    
    return 0;
}