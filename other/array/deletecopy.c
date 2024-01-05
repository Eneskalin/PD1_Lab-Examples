#include <stdio.h>
/*Remove duplicates from the sorted array:
Array Before Removing Duplicates: 1 2 2 3 4 5 6 7 7 8
Array After Removing Duplicates: 1 2 3 4 5 6 7 8*/
void main(){
    int a[]={1,2,2,3,4,5,6,7,7,8},size = 9;

    for (int i = 0; i <10 ; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (a[i]==a[j]) 
            {
                for (int k = j; k <size; k++) 
                {
                    a[j]=a[j+1]; 
                }
                

                
            }
            size--; 
            
        }
        
        
    }
    for (int i = 0; i <size; i++)
    {
        printf("%d",a[i]);
    }
    
    


}