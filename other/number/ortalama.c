#include <stdio.h>

int main() {
    /*Arka arkaya girilen rastgele 10 tam sayının ortalaması ile bu
sayılardan en büyük ve en küçük olanın ortalamasını bularak elde
edilen bu iki ortalamanın farkını bulan programın algoritma ve
akış diyagramını oluşturunuz.*/
    int n,i,sum=0,ort=0,min=0,max=0;
    for ( i = 0; i <10; i++)
    {
        printf("Sayi giriniz:");
        scanf("%d",&n);
        sum=sum+n;
        
        if (n>=max){
            max=n;
            printf("max deger =%d\n",max);
            min=max;
        }
        if (n<min){
             min=n;
             printf("min deger =%d\n",min);
        }
              

    }
    printf("\nGenel Ortalamasi:");
    ort = sum/10;
    printf("%d\n",ort);
    printf("\nMin&max ortalamasi:");
    int ortm= (max+min)/2;
    printf("%.d",ortm);
    printf("\nmax ve min degerler %d\t%d",min,max);


}