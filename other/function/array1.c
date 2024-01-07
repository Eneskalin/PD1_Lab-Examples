#include <stdio.h>
/*Klavyeden Integer tipinde tek boyutlu bir dizi
alan ve dizide kaç tane 4’ün katı olan sayı
olduğunu döndüren fonksiyonu ve ana
programı yazın.*/
int array(int a[]);

void main(){
    int len;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
     len=array(a);
    printf("%d",len);
    

}

int array(int a[]){
    int counter=0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]%4==0)
        {
            counter++;
        }
        
    }
    return counter;
    
}