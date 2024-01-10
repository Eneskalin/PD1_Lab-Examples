#include <stdio.h>
/*x değeri klavyeden girildiğinde 1 + 2 + .... + (x - 1) + x seri toplama değerini hesaplayan
fonksiyon yazınız.
*/
void topla(int x);

int main(){
    int x;
    printf("Bir sayi giriniz:");
    scanf("%d",&x);
    topla(x);
    return 0;

}

void topla(int x){
    int sum=0;
    for (int i = 1; i <=x; i++)
    {
        sum+=i;
    }
    printf("Toplam:%d",sum);
    
}