#include<stdio.h>

void main(){
 /*Aynı satır ve sütun sayısına sahip iki matrisi toplayan C kodunu yazınız. Matris değerleri
klavyeden girilecek.
Write the C code that adds two matrices with the same number of rows and columns. Matrix
values will be entered from the keyboard.
*/
int a[3][3],b[3][3],c[3][3];

for (int i = 0; i <3; i++)
{
    for (int j = 0; j <3; j++)
    {
    printf("a[%d][%d]:",i,j);
    scanf("%d\n",&a[i][j]);
    }
    
    
}
for (int i = 0; i <3; i++)
{
    for (int j = 0; j <3; j++)
    {
    printf("b[%d][%d]:",i,j);
    scanf("%d\n",&b[i][j]);
        
    }
    
    
}

for (int i = 0; i <3; i++)
{
    for (int j = 0; j <3; j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    
}

for (int i = 0; i <3; i++)
{
    for (int j = 0; j <3; j++)
    {
        printf("c[%d][%d]=",i,j);
        printf("%d\n",c[i][j]);

    }
    printf("\n");
    
}





}