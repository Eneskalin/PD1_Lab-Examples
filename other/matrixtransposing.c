#include <stdio.h>
/*[2x2] tipindeki bir kare matrisin transpozesini veren algoritma.Algorithm for transposing a square matrix of type [2x2]
*/

int main(){
    int a[2][2],tp[2][2];
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    int b[2][2];
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            tp[j][i]=a[i][j];
        }
        
    }

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%d\n",tp[i][j]);
        }
        printf("\n");
    }
    
    
    




    return 0;
}