#include <stdio.h>

/*Write C Program to Count the Number of Vowels, Consonants and so on


Enter a line of string: adfslkj34 34lkj343 34lk
Vowels: 1
Consonants: 11
Digits: 9
White spaces: 2*/

void main(){
    int k,vowels=0,con=0,digit=0,space=0,alp=0;
    char str[100];
    printf("Enter a string \n");
    gets(str);
    while (str[k]!= '\0')
    {
        k++;
    }
    
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'||str[i]=='u')
        {
            vowels++;
        }
        else if (str[i]>='a'&&str[i]<='z'|| str[i]>='A' && str[i]<='Z')
        {
            con++;
        }
        
        if (str[i]== ' ')
        {
            space++;
        }
        if (str[i]<='9' && str[i]>='0')
        {
            digit++;
        }

        
        

        
        
    }

    printf("Vowels:%d\n",vowels);
    printf("Consonants:%d\n",con);
    printf("Digits:%d\n",digit);
    printf("White Spaces:%d\n",space);

}