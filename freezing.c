#include <stdio.h>
//Determine Whether a Temperature is Below or Above the Freezing Point
int main() {
    printf("Sicakligi giriniz:");
    int temp;
    scanf("%d",&temp);

    if (temp>0)
    {
        printf("Above the freezing point");
    }
    else{
        printf("Below the freezing point");

    }  
    
    return 0;
}