    #include <stdio.h>
    #include <math.h>

    void main(){
    /* Write a program that assigns the digits of the maximum 5-digit number to an array and
prints it to the screen.
    */ 
    int a[5],number,digit;
    printf("Enter a number");
    scanf("%d",&number);
    for (int i = 0; i <5; i++)
    {   
        digit=number%10;
        a[i]=digit;
        number=number/10;
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("%d,",a[5-i]);
    }
    
   
    


    }