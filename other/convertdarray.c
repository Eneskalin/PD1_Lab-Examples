#include <stdio.h>

void main(){
    /*İki boyutlu bir diziyi, tek boyutluya çeviren programın algoritma ve
akış diyagramını oluşturunuz.Program program that converts a two-dimensional array to one-dimensional and
we assemble the drainage diagram.*/
int a[5][5]={1,2,3,4,5,6,7,8,9,10},b[25],t=0;

for (int i = 0; i <5; i++)
{
    for (int j = 0; j <5; j++)
    {
        a[i][j]=b[t];
        printf("a[%d][%d]=b[%d]\n",i,j,t);
        t++;

    }
    
}

}



