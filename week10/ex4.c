    #include <stdio.h>
    #include <math.h>

    void main(){
    /* Write a program that takes a 10-element array from the keyboard and writes it in reverse to
the screen. (1.5,2,4,5,6,78,12,1.3 => 3.1,12,78,6,5,4,2,5,1)
    */ 
    int a[10],number,digit;
    
    for (int i = 0; i <10; i++)
    {  
        printf("Enter a number");
        scanf("%d",&number);
        a[i]=number;
    }
    for (int i = 1; i <= 10; i++)
    {
        
        printf("%d,",a[10-i]);
    }
    
   
    


    }