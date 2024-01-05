#include <stdio.h>
/*Program flow and flow diagram giving the following
combine.İki kare 13x31 matrisin toplamını yapan programın algoritma ve akış diyagramını oluşturunuz.*/

void main(){
    int a[3][3]={1,3,5,7,9,11};
    int b[3][3]={2,4,6,8,10,12};
    int c[3][3];
    for (int i = 0; i <6; i++)
    {
        for (int j = 0; j <6; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }

    for (int i = 0; i <6; i++)
    {
        for (int j = 0; j <6; j++)
        {
            printf("%d",c[i][j]);
        }
        
    }
    

}