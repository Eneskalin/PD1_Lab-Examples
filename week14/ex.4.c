#include <stdio.h>
/*  Klavyeden girilen bir cümledeki sesli harfleri * (yıldız) karakteri ile değiştirerek ekrana yazan
bir C programı yazınız.
Örnek: Hemserim Memleket Nere? BU DUNYA BENIM MEMLEKET
=====> H*ms*r*m M*ml*k*t N*r*? B* D*NY* B*N*M M*ML*K*T
*/
void main(){
    char array[80];
    printf("Enter a string:");
    gets(array);
    for (int i = 0; array[i] !='\0'; i++)
    {
        if (array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='u'||array[i]=='o')
        {
            array[i]='*';
        }
        
    }
    puts(array); 

}