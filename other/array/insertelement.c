#include <stdio.h>
/*Program to insert an element in an Array*/


void main(){
    int a[100],len,num,loc;
    printf("Enter array lenght:");
    scanf("%d",&len);
    for (int i = 0; i < len; i++)
    {
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter elements to insert:");
    scanf("%d",&num);
    printf("Enter position");
    scanf("%d",&loc);

    for (int j = len+1; j >loc-1; j--)
    {
        a[j]=a[j-1];
        
    }
    a[loc-1]=num;

    for (int k = 0; k < len+1; k++)
    {
        printf("%d\n",a[k]);
    }
    
    
    
   
    }
    
    
    
    



