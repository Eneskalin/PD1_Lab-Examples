#include <stdio.h>
/*Kendisine parametre olarak verilen 3x3 boyutlu matrisin elemanlarini buyukten kucuge siralayan
bir fonksiyon yaziniz.Matrisin sol ust kosesinde en buyuk sayi icermelidir.Sag alt kosesi ise en kucuk sayiyi
icermelidir.*/

void revize(int a[][3],int x);

int main(){
    int array[3][3];
    int x=3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    revize(array,x);
}
void revize(int a[][3],int x){
    int b[9],k=0,temp;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[k]=a[i][j];
            k++;
        }  
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (b[j+1]>b[j])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
            
        }
        k=0;        
    }
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",b[k]);
            k++;
        }
        printf("\n");
        
    }
    
    
    
    
    
}
