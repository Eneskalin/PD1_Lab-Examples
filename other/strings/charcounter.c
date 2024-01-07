#include <stdio.h>

/*C Program to calculate the Frequency of characters in a string*/


void main(){
int k=0, count[26] = {0};
char str[100], a[100]={0};
printf("Enter the string: ");
gets(str);

while (str[k]!='\0')
{
    if(str[k] >= 'a' && str[k] <= 'z')
        {
            count[str[k] - 'a']++; 
        }
        k++;    
}

for(k= 0; k < 26; k++)
    {
       
        if(count[k] != 0)  
        {
            printf("\n\t\t%c occurs %d times in the string, \n",k+'a' ,count[k]);
        }
    }


}