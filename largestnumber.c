#include <stdio.h>

int main() {
    int a,b,c,max;
    printf("Uc adet sayi giriniz:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


    if (a>b)
    {
        if (a>c)
        {
            max=a;
            
        }
        else{
            max=c;
            
        }   
    }
    else{
        if (b>c)
        {
            max=b;
            

        }
        else{
            max=c;
        }
        
    }
   
    printf("%d",max);

    
    

    
    return 0;
}