#include <stdio.h>
/*3 fonksiyonu olan bir C programı yazın (Write a C program that has 3 functions):
1- İlk fonksiyon (strLength) parametre olarak katarı (array of char) alır ve katarın uzunluğunu int olarak döndürür.
(First function (strLength) takes the string (array of char) as a parameter and return the length of the string as int.)
2- İkinci fonksiyon (strReverse), katarı (char dizisi) ve strLength fonksiyonundan gelen katar uzunluğu olmak üzere
2 parametre alır. Bu fonksiyon katarı tersine çevirir. (Second function (strReverse) takes 2 parameters, the string
(array of char) and the length of the string that came from strLength function. This function will reverse the
string.)
3- Üçüncü fonksiyon (ana) katarı okur ve uzunluğunu bulmak için strLength'i çağırır, ardından katarı tersine
çevirmek için strReverse'i çağırır. Bundan sonra, katarın uzunluğunu ve ters katarı ekrana yazdırır. (Third function
(main) reads the string and call the strLength to find its length then call the strReverse to reverse the string. After
that, print the length of the string and the reversed string in the main.)*/
 
int strLength(char a[]);
void strReverse(char b[],int m);

void main(){
    char str[80];
    printf("Enter a string:");
    gets(str);
    int len=strLength(str);
    printf("%d\n",len);
    strReverse(str,len);
    puts(str);

   
   
}

int strLength(char a[]){
    int k=0;
    while (a[k]!='\0')
    {
        k++;
    }
     
     return k;
}
void strReverse(char b[],int m){
    char temp;
    for (int i = 0; i <m/2; i++)
    {
        temp=b[i];
        b[i]=b[m-i-1];
        b[m-i-1]=temp;
    }
}
