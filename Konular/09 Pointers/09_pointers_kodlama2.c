#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* BEGIN 0 */
void boslukKarakterSay(char *str,int *boslukSayisi){
	char *ptr = str;
	while(*ptr!='\0'){
		if(*ptr==' '){
			*boslukSayisi+=1;
		}	
		ptr++;
	}
}
/* END 0 */


/* BEGIN 1 */
void myStrlen(char *str,int *karakterSayisi){
	char *ptr = str;
	while(*ptr != '\0'){
		*karakterSayisi += 1;
		ptr++;
	}
}

void tersiniYazdirma(char *str){
	int karakterSayisi = 0;
	myStrlen(str, &karakterSayisi);
	printf("String %d adet karakter icermektedir.\n", karakterSayisi);

	char *ptr = str + karakterSayisi - 1;
	while(ptr >= str){
		printf("%c", *ptr);
		ptr--;
	}	
}
/* END 1 */

int main(){

	/* Boşluk Karakterini Sayma ve Stringin tersini yazdırma --------------------------- */
	/* BEGIN 0 */
    char *kullaniciGirisi = "how i met your mother";
    int boslukSayisi = 0;
    boslukKarakterSay(kullaniciGirisi, &boslukSayisi);
    printf("Girdiginiz string %d adet bosluk karakteri icermektedir\n\n", boslukSayisi);
	/* END 0 */
	/* OUTPUT 0 */
	/*
	Girdiginiz string 4 adet bosluk karakteri icermektedir.
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */
 	tersiniYazdirma(kullaniciGirisi);
	/* END 1 */
	/* OUTPUT 1 */
	/*
	String 21 adet karakter icermektedir.
	rehtom ruoy tem i woh
	*/
	/* OUTPUT 1 */

	return 0;
	
}
