#include <stdio.h>
/*İki ayrı fonksiyon oluşturarak bir tamsayının asal sayı mı yoksa Armstrong mu yoksa her ikisi mi
olduğunu kontrol etmeyi sağlayan programı yazınız.*/
int asal(int);
int armstrong(int);

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (asal(a)==1 && armstrong(a)==1)
    {
        printf("%d prime and armstrong number\n",a);
    }
    else if (asal(a)==1)
    {
        printf("%d prime number\n",a);
    }
    else if (armstrong(a)==1)
    {
        printf("%d armstrong number\n",a);
    }

    return 0;
}

int asal(int a){
    int flag=1;
    for (int i = 2; i < a/2; i++)
    {
        if (a%i==0)
        {
            flag=0;
        }
    }
    if (flag==1)
    {
        return 1;
    }
    else{
        return 0;
    }  
}
int armstrong(int a){
    int sum=0;
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    if (a==sum)
    {
        return 1;
    }
    else{
        return 0;
    }
    
    
}