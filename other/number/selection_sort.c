#include <stdio.h>
/*Selection Sort (Seçme Sıralama) algoritması ile bir dizinin
sıralanması programının algoritma ve akış diyagramını oluşturunuz.of an array with the Selection Sort algorithm.
Create the algorithm and flow diagram of the sequencing program.
 5,7,2,9,6,1,3,7
*/

void main(){
    int a[7]={5,7,2,9,6,1,3,7},min,temp;
    min=a[0];

    for (int i = 0; i < 8; i++)
    {
        
        for (int j = i; j < 8; j++)
        {
            min=a[i];
            for (int j = i+1; j < 8; j++)
            {
                if (a[j]<min)
                {
                    min=a[j];
                }
            }

           temp=a[i];
           a[i]=min;
           a[j]=temp; 
            
        }

        
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d",a[i]);
        
    }
    
    
    





}