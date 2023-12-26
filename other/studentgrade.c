#include <stdio.h>
/*End-of-year grades of 50 students in a class, transitioning from one course to another
is given. How many students are successful according to the success score of 50?
find program flow and flow diagram
combine.*/
int main(){
    int counter=0,a[50]={};
    for (int i = 0; i <50; i++)
    {
        printf("Enter student grades\n");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        if (a[i]>50)
        {
            counter++;
        }
    }
    printf("Passed students number:");
    printf("%d",counter);
    
    
    return 0;
}