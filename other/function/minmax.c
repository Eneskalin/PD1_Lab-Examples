#include <stdio.h>

/* İki tam sayıdan küçük olanını ve büyük olanını blan iki fonksiyon yazın. Küçük olanı bulan fonksiyonun adı minimum olsun
büyük olanın adı maximum olsun.Write two functions that find the smaller and larger of two integers. Let the name of the function that finds the smaller one be minimum
Let the bigger one be called maximum.*/
int minimum (int,int);
int maksimum(int,int);

void main(){
    int num1,num2;
    printf("Enter first number:");
    scanf("%d\n",&num1);
    printf("Enter second number:");
    scanf("%d\n",&num2);
    printf("Maximum number:");
    printf("%d\n",maksimum(num1,num2));
    printf("Minimum number:");
    printf("%d",minimum(num1,num2));

}

int minimum (int a,int b){
    int min;
    if (a<b)
    {
        min=a;
    }
    else{
        min=b;
    }
    return min;
    
}
int maksimum (int a,int b){
    int max;
    if (a>b)
    {
        max=a;
    }
    else{
        max=b;
    }
    return max;
    
}
