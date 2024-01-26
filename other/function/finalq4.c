    #include <stdio.h>
    /*Iki stringin ayni oldugunu kontrol eden bir fonksyion yazin bunu mainde kullanin */
    int kontrol(char str1[],char str2[]);

    int main(){
        char str1[80],str2[80];
        printf("Birinci stringi giriniz::");
        gets(str1);
        printf("Ikinci stringi giriniz:");
        gets(str2);
        int sonuc = kontrol(str1,str2);
        if (sonuc==1)
        {
            printf("Ayni");
        }
        else{
            printf("Degil");
        }
    }
    int kontrol(char str1[],char str2[]){
        int i,flag=1;
        for ( i = 0; str1[i] !='\0'; i++)
        {
            if (str1[i]!=str2[i])
            {
                flag=0;
            }
        }
        if (str2[i+1]!='\0')
        {
            flag=0;
        }
        if (flag==1)
        {
            return 1;
        }
        else{
            return 0;
        }
        
        
        
    }