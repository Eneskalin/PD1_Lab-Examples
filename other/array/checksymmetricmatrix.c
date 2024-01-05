#include <stdio.h>

/*Program to check whether given Square Matrix is symmetric or not
*/

void main(){
    int a[5][5],b[5][5];

    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);

        }
        
    }
    printf("Matrix:\n");
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d",a[i][j]);
        }
        
    }
    printf("\n\n Transposing:\n");

    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            b[j][i]=a[i][j];
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j]!=b[i][j])
            {
                printf("This matrix is not symetric");
                break;
            }
            
        }
        
    }

    printf("This matrix is  symetric");
    
    
    
    






}