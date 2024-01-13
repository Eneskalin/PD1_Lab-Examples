#include <stdio.h>
#include <math.h>   
/*Write a C function and use it in main function to have a running program. Your function 
should take an integer array and an integer to specify the type of operation to take on the 
array. Your function should calculate and return arithmetic average, geometric average and 
harmonic average of array-elements if operation type is 1, 2 and 3 respectively.
*/
void average(int arr[],int size);

int main(){
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    average(a,size);
    return 0;
}
void average(int a[],int size){
    int sum=0,multy=1,sum2=0;
    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
        multy*=a[i];
        sum2+=a[i];
    }
    
    float av1=(float)sum/size;
    float av2=pow((float)multy, 1.0 / size);
    float av3=size/sum2;
    printf("%.2f\n",av1);
    printf("%.2f\n",av2);
    printf("%.2f\n",av3);
}
