// Online C compiler to run C program online
#include <stdio.h>

int main() {
  /* Klavyeden girilen bir para miktarini en az banknot kullanarak olusturmak
istedigimizde içinde kaç tane 100, 50, 20 ve 10’luk oldugunu bulan programi C
dili ile yaziniz. Not: Klavyeden girilen para miktari 10’un katlari olmalidir.
The amount of money entered from the keyboard is desired to be created
using the minimum number of banknotes. For this purpose, the number of
each banknote (100, 50, 20 and 10) must be determined for the amount
entered. Note: The amount of money entered on the keyboard must be
multiples of 10.*/	
    int para;
    int sum=0;
    int kalan=0;
    
    printf("Para miktari giriniz:\n");
    scanf("%d",&para);
    
    if(para>=200){
        sum=sum+(para/200); 
        //printf("200 banknot sayisi =%d\n",sum); // 567 = 2
        para=para%200; //167
        printf("200`luk banknot sayisi %d\n",sum);
        
        
    }
    if(para>=100){ //167
        printf("100`luk banknot sayisi %d\n",para/100);
        sum=sum+(para/100); 
        //printf("sum =%d\n",sum);//167 = 1
        para = para %100; //67
        

        
        
    }
    if(para>=50){
        printf("50`lik banknot sayisi %d\n",para/50);
        sum=sum+(para/50);  //67 =1 
        //printf("sum =%d\n",sum);
        para = para%50; //17
        
    }
    if(para>=20){
        printf("20`lik banknot sayisi %d\n",para/20);
        sum=sum+(para/20); //0
        //printf("sum =%d\n",sum);
        para=para%20;
    }
    if(para>=10){  //17  =1  
        printf("10`luk banknot sayisi %d\n",para/10);
        sum=sum+(para/10);
        //printf("sum =%d\n",sum);
        para = para%10;
    }
    if (para>=5){
            printf("5`lik banknot sayisi %d\n",para/5);
            
        
        sum=sum+(para/5); //7
        //printf("sum =%d\n",sum);
        para = para%5;
        
    }
    printf("Toplam banknot Sayisi:\n");
    printf("%d \n",sum);
        printf("Kalan Para:\n");
        printf("%d",para);
    
    

    return 0;
}