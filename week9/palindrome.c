#include <stdio.h>

int main() {
    /*Write a C program to check whether a given number from keyboard is
Palindrome number or not*/
int num,digit,num2=0;
printf("Enter a number:");
scanf("%d",&num);
int k=num;
while (k>9)
{
    digit=k%10;
    num2=num2+digit;
    num2=num2*10;
    k=k/10;
    

    
}
num2=num2+k;
if (num==num2)
{
    printf("%d is palindrome number",num );
}
else{
    printf("not palindrime");
}



    
    return 0;
}