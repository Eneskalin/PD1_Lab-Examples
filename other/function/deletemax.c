#include <stdio.h>
/*Write a function called deleteMax that finds and removes all instances of the largest integer from
theüay. (Just write the function definition, NOT the whole program! ! ) [18 pts]
En büyük tam sayının tüm örneklerini bulan ve silen, deleteMax adında bir fonksiyon yazın.
işte. (Programın tamamını DEĞİL, sadece fonksiyon tanımını yazın!) [18 puan]
a={5,8,3,8,3,2}  ===> a={5,3,3,2}*/
void deleteMax(int[]);
void main(){
    int array[]={5,8,3,8,3,2};
    deleteMax(array);
    
}

void deleteMax(int a[5]){
    int temp,max=a[0];
    for (int i = 0; i <5; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
       if (a[i]==max)
       {
        for (int j = i; j <5; j++) // 5,8,3,8,3,2
        {
            a[j]=a[j+1];
        }
        
       }
       
        
        
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d",a[i]);
    }
    
    
    
    
}