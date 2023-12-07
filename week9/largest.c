#include <stdio.h>

int main() {
    /*Write a C program to find the largest of three numbers A, B, and C given
from keyboard. */
 int a,b,c,max;
 printf("Uc adet sayi giriniz:");
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 if (a>b && a>c)
 {
   max=a;
 }
 if (b>c && b>a)
 {
    max=b;

    
 }
 else{
    max=c;
 }
 
 
 printf("%d",max);
 
 
 

    
    return 0;
}