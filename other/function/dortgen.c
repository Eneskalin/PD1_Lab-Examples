#include <stdio.h>
/*Verilen değerlerde dörtgen çizen bir algoritma yazınız*/

void dortgen(int en,int boy){
    printf("\n");

    for (int i = 1; i <= boy; i++)
    {
        
        for (int j = 1; j <= en; j++)
        {
            if (j==1||j==en||i==1 || i==boy )
            {
                printf(".");
            }
            else {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
    }
}

int main(){
    dortgen(5,6);
}