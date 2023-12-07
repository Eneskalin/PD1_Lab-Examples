#include <stdio.h>
/* Klavyeden girilen a tabanlı n üstlü sayıyıyın cevabını bulunuz*/

void main(){
    int a,n;
    int carp =1;
    int t =0;
    printf("Tabani Gir:");
    scanf("%d",& a);
    printf("Ustu Gir:");
    scanf("%d",& n);
    while (t<n)
    {
        carp=carp*a;
        t++;
    }
    printf("%d", carp);
    



}