
#include <stdio.h>

int main() {
	/*Klavyeden bir dairenin yariçap bilgisi ve islem türü girildiginde islem türü 1
ise dairenin çevresini hesaplanip yazdiran 2 girilirse alaninin hesaplayip
yazdiran, bunlarin disindaki girisler için “Yanlis giris” mesaji vererek sonlanan
programi C dili ile yaziniz.*/

    int r,islem;
    float cevre,alan;
    printf("Cemberin Yaricapini Giriniz:");
    scanf("%d",&r);
    printf("Islem turunu giriniz: \t (Cevre Hesaplamak Icin 1 \t Alan hesapalmak Icin 2 ye basiniz)\n");
    scanf("%d",&islem);
    if (islem==1){
        cevre=2*3.14*r;
        printf("Cemberin cevresi\n");
        printf("%.2f",cevre);
        
    }
    else if(islem==2){
        alan=3.14*(r^2);
        printf("Cemberin alani\n");
        printf("%.2f",alan);
    }
    else{
        printf("Hatali Giris Yaptiniz");
        
    }
    
    
    return 0;
}