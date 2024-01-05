#include <stdio.h>
/*Using the program that finds the first 10 terms of the Fibonacci series using the array
in summer*/

#include <stdio.h>

int main() {
    int a[10];
    a[0],a[1] = 1;


    for (int i = 2; i <10; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("The first 10 terms of the Fibonacci series are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

