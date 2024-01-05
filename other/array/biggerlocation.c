#include <stdio.h>


void main(){
    /*10 elemanlı bir sayı dizisinin en büyük ve en küçük elemanlarını ve
yerini bulan programın algoritma ve akış diyagramını oluşturunuz.Find the largest and smallest elements of a 10-element number array and
Create the algorithm and flow diagram of the program that finds the location.*/
int a[10],max=a[0],min=a[0],maxnum,minnum;
for (int i = 0; i <10; i++)
{
    printf("Enter a[%d]",i);
    scanf("%d",&a[i]);
    if (a[i]>max)
    {
        max=a[i];
        maxnum=i+1;
    }
    if (a[i]<min)
    {
        min=a[i];
        minnum=i+1;
    }
    
    
}
printf("Max\n");
printf("%d\n",max);
printf("Max array\n");
printf("%d\n",maxnum);
printf("Min\n");
printf("%d\n",min);
printf("Min array\n");
printf("%d\n"),minnum;


}


