#include <stdio.h>
/*10 elemanlı tamsayı dizisine klavyeden değerler girilerek bir fonksiyona gönderilecek. Dizide yer
alan en büyük ilk iki sayıyı bularak ekrana yazdıran fonksiyonu yazınız.
The 10-element integer array will be sent to a function by entering values from the keyboard. Write a
function that finds the "biggest first two numbers" in the array and prints it to the screen.*/
void array(int[]);

void main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] degerini giriniz:",i);
        scanf("%d",&a[i]);}
        array(a);
    }

void array(int b[]){
    int max1=b[0],max2=b[1];
    for (int i = 0; i < 10; i++)
    {
        if (b[i]>max1)
        {
            max2=max1;
            max1=b[i];
        }
        else if (b[i]>max2)
        {
            max2=b[i];}
    }
    printf("En buyuk sayi=%d\n",max1);
    printf("En buyuk ikinci sayi=%d",max2);
    
    
}