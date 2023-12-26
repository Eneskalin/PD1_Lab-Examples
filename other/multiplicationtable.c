#include <stdio.h>
 /*Draw a flow chart to print multiplication table of any number*/
int main() {
    int number,multiplication=1;
    printf("Enter a number:\n");
    scanf("%d",&number);

    for (int i = 1; i <=10; i++)
    {
        multiplication=number*i;
        printf("%d",number),printf("x"),printf("%d",i),printf("="),printf("%d\n",multiplication);
        
    }
    
    
    return 0;
}