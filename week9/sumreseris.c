#include <stdio.h>
#include <math.h>


int main() {
    /*Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].*/
    int x,n,i,t=2,carp=1,sum=0;
    printf("Enter x number:");
    scanf("%d",&x);
    sum = 1+x;
    printf("sum =%d\n",sum);
    printf("Enter n number:"); //uzunluk
    scanf("%d",&n);
    for (i = 3; i<n; i++)
    {
        sum += pow(x,t)/(carp*=t);
        ///printf("sonuc = %d\n",sum);
        t++;
    }
    printf("%d",sum);
    




    
    return 0;
}