#include <stdio.h>

int main() {
    int radius;
    printf("Capi giriniz:");
    scanf("%d",& radius);
    float area = 3.14*((radius)*(radius)); 
    printf("%.2f", area);

    
    return 0;
}