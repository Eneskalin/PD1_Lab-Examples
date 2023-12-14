#include <stdio.h>

void main(){
    /*Enter a value from the keyboard to the 8-element float array. Calculate the average of the
entered values and print it on the screen.*/

float sum,a[8],ort;
 for (int i = 0; i <8; i++)
 {
    printf("Enter a number\n");
    scanf("%f",& a[i]);
    sum=sum+a[i];
 }
 ort=sum/8;
 printf("%.2f",ort);

 
}