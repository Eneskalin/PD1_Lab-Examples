#include <stdio.h>
/*Bubble (kabarclk) siralama algoritmasr ile bir dizinin sn•alanmasr
progranumn algoritma ve ak19 diyagranum olusturunuz.Scanning an array using bubble sorting
Create the program program and AK19 diagram.*/

void bubblesort(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j-1]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            
        }
        
    }  
}


