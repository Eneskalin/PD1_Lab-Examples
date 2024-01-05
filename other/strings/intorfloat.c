#include <stdio.h>

/*Program to check if input Number is int or float.Sayı girişinin int mi float mı olduğunu kontrol eden program*/

void main(){
    int flag=1;
    char num[100];

    printf("Enter a number: ");
    gets(num);
    for (int i = 0; num[i] != '\0'; i++)
    {
        if (num[i]=='.' || num[i]=='e'|| num[i]=='E')
        {
            flag=0;
        }
       
        
    }
    if (flag==1)
    {
         printf("That's a integer number");
        
    }
    else{
        printf("That's a float number");
    }
    
    
    
}