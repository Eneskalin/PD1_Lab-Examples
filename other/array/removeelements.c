#include <stdio.h>
/*Program to Delete an Element from Array in C*/
void main(){
    int a[100],size,position;
    printf("Enter array size:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Select a position from array to delete element: ");
    scanf("%d",&position);
    for (int j = position-1; j < size-1; j++)
    {
        a[j]=a[j+1];
    }
    
    for (int i = 0; i < size-1; i++)
    {
        printf("%d",a[i]);
    }
    
    
    
}




