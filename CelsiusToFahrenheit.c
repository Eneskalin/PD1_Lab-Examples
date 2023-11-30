#include <stdio.h>
//Convert Temperature from Fahrenheit (℉) to Celsius (℃).

int main() {
    printf("Fahrenheit degerini giriniz:");
    float fah,celsius;
    scanf("%f",&fah);
    celsius= (fah-32)*(5.0f/9.0f);
    printf("%.2f ",celsius),printf(" celsius");

    
    return 0;
}