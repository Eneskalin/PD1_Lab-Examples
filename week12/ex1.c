#include <stdio.h>


void main(){
    /*10 elemanlı tamsayı dizisine klavyeden değerler girilerek bir fonksiyona gönderilecek. Dizide yer
alan en büyük ilk iki sayıyı bularak ekrana yazdıran fonksiyonu yazınız.
The 10-element integer array will be sent to a function by entering values from the keyboard. Write a
function that finds the "biggest first two numbers" in the array and prints it to the screen.*/
 int a[10],max,max2;
 for (int i = 0; i <9; i++)
 {
    printf("a[%d]",i);
    scanf("%d",&a[i]);
 }
 max=a[0];
 max2=a[0];

 for (int i = 0; i <9; i++)
 {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
     

  for (int j = 0; j <9; j++)
  {
    if (max>a[j]&&a[j]>max2)
    {
        max2=a[j];
    }
    
  }
  printf("%d\n",max);
  printf("%d",max2);
  
 
    
 }
 
 





 
 

 
