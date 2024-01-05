#include <stdio.h>

int main(){
    /*Draw a flow chart to check whether a number is Strong number or not (strong number= 145 = 1!+4!+5!)*/

    int number,digit1,k,sum=0;
    printf("Enter a number:"); //145
    scanf("%d",& number);
    k=number;
    
    while (k>9){
        int multiplication=1;
         digit1=k%10; //digit1=5,4
        for (int i=digit1 ; i>=1; i--)  // 5 to 1,4 to 1
        {
            multiplication=multiplication*i; //multi= 120 , 24 
            
        }

        sum=sum+multiplication;  //sum = 120 + 24 
        k=k/10; //14, 1
    }
 
    int multiplication=1;
        for (int i=k ; i>=1; i--)  // 1 to 1
        {
            multiplication=multiplication*i; //1
            
        }
    sum=sum+multiplication; //145
    printf("%d\n",sum);

    

    if (number==sum)
    {
        printf("%d is strong number ",number); 
    }
    else{
        printf("%d is not strong number",number);
    }
    

    return 0;
}