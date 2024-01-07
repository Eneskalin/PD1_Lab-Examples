#include <stdio.h>

int square(int x);
int addfive(int x);

int main(){
    int number=10;
    printf("%d\n",square(number));
    printf("%d",addfive(number));
    return 0;
}

int square(int x){
    x*=x;
    return x;
}

int addfive(int x){
    x+=5;
}