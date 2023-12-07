#include <stdio.h>

int main() {
    /*Write a C program which generates even numbers between 1000 and 2000
and then prints them.*/
int i;

for ( i = 1000; i <=2000; i++)
{
    if (i%2==0)
    {
        printf("%d\n",i , "is even number");
    }
    
}

    
    return 0;
}