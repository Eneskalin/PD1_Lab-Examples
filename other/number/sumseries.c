#include <stdio.h>
#include <math.h>
/*Draw a flow chart to find the sum of the series [ x - x^3 + x^5 + ......]*/
int main() {
    int x,n,sum=0,t=1,counter=1;
    printf("Enter the x\n");
    scanf("%d",&x);
    printf("Enter array length:\n");
    scanf("%d",&n);

    while (counter<=n)
    {
        if (counter==2)
        {
            sum=sum-pow(x,t);

        }
        else{
            sum=sum+pow(x,t);
        }
        
        counter++;
        t=t+2;
        
    }
    printf("%d",sum);
    


    
    return 0;
}