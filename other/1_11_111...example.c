#include <stdio.h>

int main() {
    /*.Draw a flow chart to find the sum of the series 1 +11 + 111 + 1111 + .. n terms*/
    int n,num=1,sum=0;
    printf("Enter term size");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum=sum+num;
        num=num*10+1;
    }
    printf("%d",sum);
    


    
    return 0;
}