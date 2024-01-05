#include <stdio.h>
    /*Girilen cümlede, girilen karakterden kaç tane olduğunu bulan
programın algoritması ve akış diyagramını oluşturunuz.Finds how many characters are in the entered sentence
Create the algorithm and flow diagram of the program.*/

int main(){
    int k=0,counter=0;
    char str[100],w;
    printf("Enter a sentence:");
    gets (str);
    printf("Enter a word:");
    scanf("%c",&w);
    while (str[k]!='\0')
    {
        k++;
    }
    for (int i = 0; i <k; i++)
    {
        if (str[i]==w)
        {
            counter++;
        }
        
    }

    printf("%d",counter);
    
    
    




    return 0;
}