#include <stdio.h>

/*Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin
vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve
öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile
yazınız.*/

int main() {
	int no,vizeNotu,finalNotu;
	float not;
    printf("Ogrenci Numarasi Giriniz:\n");
	scanf("%d",&no);
	printf("Vize Notu Giriniz:\n");
	scanf("%d",&vizeNotu);
	printf("Final Notu Giriniz:\n");
	scanf("%d",&finalNotu);
	not=(0.4*vizeNotu + 0.6*finalNotu);
	printf("Ogrenci Numarasi:\n");
	printf("%d \n",no);
	printf("Ogrenci Notu\n");
	printf("%.2f",not);

    return 0;
}
