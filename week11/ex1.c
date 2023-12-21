#include <stdio.h>

void main(){
/*Pentagon sayıları Pn=n(3n−1)/2 formülüne göre üretilmektedir. 100'den küçük pentagon
sayılarını ekrana yazdırın.
Pentagon numbers are produced according to the formula Pn=n(3n−1)/2. Print pentagon
numbers less than 100 to the screen.*/

int a[100],t=1,pd;

for (int i = 0; i <100; i++)
    {
        pd=t*(3*t-1)/2;
        a[i]=pd;
        t++;
    }

for (int i = 0; i <100; i++)
{
    if (a[i]<100)
    {
        printf("%d\n",a[i]);
    }
    
}





}