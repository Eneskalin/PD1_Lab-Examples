#include <stdio.h>
/*- Küçükten büyüğe doğru sıralı bir diziye, dizinin sırasını bozmayacak şekilde, verilen bir elemanı
ekleyen fonksiyonu yazınız.
Write a function that adds a given element to an array in ascending order without changing the order
of the array.
Girilen dizi : 1 3 5 7 9
Eklenecek sayi : 4
Dizinin son hali : 1 3 4 5 7 9*/
void array(int num,int a[]);
int main(){
    int a[]={1,3,5,7,9},num;
    printf("Enter a number:");
    scanf("%d",&num);
    array(num,a);

}

void array(int num,int a[]){
    int temp;
    num=a[5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
        
    }
    for (int i = 0; i <6; i++)
    {
        printf("%d",a[i]);
    }
    
    
}


/*    for (int i = 0; i < 6; i++) { 1 3 5 7 9      ===>4
        if (a[i] > num) {
            for (int j = 5; j > i; j--) {
                a[j] = a[j - 1];
            }
            a[i] = num;
            break;
        }
    }*/