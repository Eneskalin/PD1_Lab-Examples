#include <stdio.h>
/*Bubble (kabarclk) siralama algoritmasr ile bir dizinin sn•alanmasr
progranumn algoritma ve ak19 diyagranum olusturunuz.Scanning an array using bubble sorting
Create the program program and AK19 diagram.*/

void main(){
    int num,a[10],temp;

    for (int i = 0; i <10 ; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i <9; i++)
    {
        for (int j = 0; j <9; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }for (int i = 0; i <10; i++)
    {
        printf("%2d",a[i]);
    }
    
 
    






}


