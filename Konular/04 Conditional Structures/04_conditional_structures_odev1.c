#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

	/* Char Hazir Fonksiyonlarini Kendimiz Yazalim ---------------------------*/
	/*
	* Kursun baslarinda char ile ilgili gordugumuz bazi fonksiyonlar vardi(tolower,toupper,islower,isupper,isalpha,isalnum,isdigit)
	bunlardan herhangi 3 tanesini secip kendiniz yaziniz.
	*/
	/* BEGIN 0 */
	char ch;
	printf("lutfen bir karakter giriniz:");
	ch=getchar(); //tek bir karakter degeri alir.

	//isLower
	if(ch>='a' && ch<='z'){
		printf("kucuk bir harftir.\n");
	}
	else{
		printf("kucuk bir harf degildir.\n");
	}
	
	//isUpper
	/*	
	if(ch>=65 && ch<=90){
		printf("buyuk bir harftir.\n");
	}
	else{
		printf("buyuk bir harf degildir.\n");
	}
	*/
	
	//isAlpha
	/*	
	if((ch>='A' && ch<='Z') || (ch>=97 && ch<=122)){
		printf("alfabetik.\n");
	}
	else{
		printf("alfabetik degildir.\n");
	}
	*/
	
	//isAlnum	
	/*
	if((ch>='A' && ch<='Z') || (ch>=97 && ch<=122)||(ch>=48 && ch<=57)){
		printf("alfanumerik.\n");
	}
	else{
		printf("alfanumerik degildir.\n");
	}
	*/
	
	//isDigit
	/*
	if(ch>=48 && ch<=57){
		printf("sayidir\n");
	}
	else{
		printf("sayi degildir.\n");
	}
	*/
	
	//toLower
	/*
	if(ch>='A' && ch<='Z'){
		ch+=32;
		putchar(ch); //ch karakterini yazdirmak icin.
	}
	else{
		printf("Girdiginiz deger buyuk bir harf degeri degildir.\n");
	}
	*/
	
	//toUpper
	/*
	if(ch>='a' && ch<='z'){
		ch-=32;
		putchar(ch);
	}
	else{
		printf("Girdiginiz deger kucuk bir harf degeri degildir.\n");
	}
	*/
	/* END 0 */

	/* Basamak Sayisi Bulma --------------------------------------------*/
	/*
	* Kullanicinin rastgele urettigi pozitif bir sayinin(maksimum 5 basamakli dusunebilirsiniz,
	dongu ogrenmedigimiz icin gerisi sorun olabilir)
	kac basamakli oldugunu bulunuz.
	*/
	/* BEGIN 1 */
	int sayi; 
	srand(time(NULL));
	sayi=rand()%100000;

	printf("Uretilen sayi:%d\n",sayi);
	if(sayi<10){
		printf("Sayi tek basamaklidir.\n");
	}
	else if(sayi<100){
		printf("Sayi iki basamaklidir.\n");
	}
	else if(sayi<1000){
		printf("Sayi uc basamaklidir.\n");
	}
	else if(sayi<10000){
		printf("Sayi dort basamaklidir.\n");
	}
	else if(sayi<100000){
		printf("Sayi bes basamaklidir.\n");
	}
	else{
		printf("Deger araligini gecen bir sayi girdiniz.\n");
	}
	/* END 1 */

	return 0;
}