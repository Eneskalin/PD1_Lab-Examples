#include <stdio.h>
#include <math.h>

int main() {
    int number,taban;
    scanf("%d",&number);
    scanf("%d",& taban);
    double result= log(number)/log(taban);
    printf("%.2lf",result);

    
    return 0;
}