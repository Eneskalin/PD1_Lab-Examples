#include <stdio.h>
/*Kullanicidan bir sayi alarak ekrana verilen boyutlarda matrix kaer matris butun elemankari 0 ve ortadaki 
elemanlari 1 olacak sekilde bir arti yazdirirniz
n=5 icin  n=6 icin 
00100     001100
00100     001100
11111     111111
00100     111111
00100     001100
          001100*/

void main(){
    int n;
    printf("Matris uzunlugunu giriniz: ");
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            a[i][j]=0;
            
            
        }
        
        
    }
    if (n%2==0)
    {
        for (int i = 0; i <n; i++)
        {
            a[i][n/2]=1;
            a[i][n/2-1]=1;
            a[n/2][i]=1;
            a[n/2-1][i]=1;
        } 
    }
    else{
        for (int i = 0; i < n; i++)
        {
            a[i][n/2]=1;
            a[n/2][i]=1;
        }
        
    }

        for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            
            printf("%d",a[i][j]);
            
        }
        printf("\n");
        
    }
    
}