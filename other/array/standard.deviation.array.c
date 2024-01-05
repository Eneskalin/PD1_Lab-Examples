#include <stdio.h>


int main(){
    /*Klavyeden girilen dizinin standart sapması hesaplayan
programı.Calculates the standard variance of the sequence entered from the keyboard
program.*/
int n;
float av,standart;
printf("Write array length\n");
scanf("%d",&n);
int a[n],sum=0,sum2=0;
for (int i = 0; i <n; i++)
{
    printf("Enter a[%d]:",i);
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
av=(float)sum/n;
for (int j = 0; j <n; j++)
{
    sum2=sum2+(a[j]-av)*(a[j]-av);
}
standart=sqrt(sum2/(n-1.0));
printf("%.2f",standart);

    return 0;
}