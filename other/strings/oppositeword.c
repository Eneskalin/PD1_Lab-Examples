#include <stdio.h>
/*Klavyeden girilen bir cümleyi, tersten yazdıran program.A program that prints a sentence entered from the keyboard in reverse.
*/

#include <stdio.h>
int main(void){
 char s[40], gecici;
 int i, n;
 /* diziyi oku */
 printf("Bir seyler yazin : ");
 gets(s); //enes
 /* sonlandırıcı karaktere kadar */
 for(n=0; s[n] != '\0'; n++); //n=4
 for(i=0; i<n/2; i++){ // i 0 to 1
 gecici = s[n-i-1]; //gecici=s[3]
 s[n-i-1] = s[i]; //s[3]=s[0]
 s[i] = gecici; // s[0]=s[3]
 }
 printf("Tersi : %s\n",s);
return 0;
}