/*Program to find exponential without using pow() method.Pow() yöntemini kullanmadan üstel sayıyı bulan program*/
#include <stdio.h>

void main(){
    int num,power,counter=1,result=1;
    printf("Enter num: ");
    scanf("%d",&num);
    printf("Enter power:");
    scanf("%d",&power);
    while (counter<=power)
    {
        result=result*num;
        counter++;
    }
    printf("%d",result);

}