#include <stdio.h>
void main(){
    int num1,num2,multi,lcm;
    /*Draw a flow chart to find LCM&GCD of two numbers*/
    printf("enter first number:"); //num1= 36
    scanf("%d",&num1);
    printf("enter second number:"); //num2=48
    scanf("%d",&num2);
    multi=num1*num2; // 1728
    if (num1<num2)
    {
        int h=num1; //h=36
        num1=num2; //num1=48
        num2=h;  // num2=36
    }
    while (num2!=0)
    {
        int k=num2; // k=36,12
        num2=num1%num2; //num2=12,0
        num1=k; //num1=36,12
    }
    lcm=multi/num1; //144
    printf("LCM:%d\n",lcm);
    printf("GCD:%d",num1);
}