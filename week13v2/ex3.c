#include <stdio.h>
/*- Küçükten büyüğe doğru sıralı bir diziye, dizinin sırasını bozmayacak şekilde, verilen bir elemanı
ekleyen fonksiyonu yazınız.
Write a function that adds a given element to an array in ascending order without changing the order
of the array.
Girilen dizi : 1 3 5 7 9
Eklenecek sayi : 4
Dizinin son hali : 1 3 4 5 7 9*/
int array(int num,int a[]);
int main(){
    int a[]={1,3,5,7,9},num;
    printf("Enter a number:");
    scanf("%d",&num);

}

int array(int num,int a[]){
    int temp;
    for (int i = 0; i < 5; i++)
    {
        if (num>a[i]&&num<a[i+1])
        {
               
        }
        
    }
    
}