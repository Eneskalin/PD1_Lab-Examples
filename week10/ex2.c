    #include <stdio.h>
    #include <math.h>

    void main(){
    /* Write a program that transfers the numbers given until -1 is entered from the keyboard, and
    then prints the square of each element to the screen. (The number of array elements will be
    maximum 10.)
    */ 
    int a[10],number;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number:\n");
        scanf("%d",& a[i]);
        if (a[i]!=-1)
        {
            printf("%d\n",a[i]*a[i]);
            
        }
        else
        break;


        

    }

    }