#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Asal sayi sorgulama -------------------------- */
	/* BEGIN 0 */
	int sorgulanacakSayi,i,bolunduMu=0; //bolunurse 1 olacak
	printf("Lutfen sorgulanacak sayiyi giriniz:");
	scanf("%d",&sorgulanacakSayi);
	for(i=2;i<sorgulanacakSayi;i++){
		if(sorgulanacakSayi%i==0){
			bolunduMu=1;
			break;
		}
	}
	
	if(bolunduMu==0){
		printf("%d sayisi asal bir sayidir.",sorgulanacakSayi);
	}
	else{
		printf("%d sayisi asal bir sayi degildir",sorgulanacakSayi);
	}
	/* END 0 */


	/* EBOB-EKOK Hesaplama -------------------------- */
	/* BEGIN 1 */
	int sayi1,sayi2,EBOB,EKOK;
	int sayac,buyukSayi,kucukSayi;
	
	printf("Lutfen EBOB-EKOK bulunacak iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(sayi1>sayi2){
		buyukSayi=sayi1;
		kucukSayi=sayi2;
	}
	else{
		buyukSayi=sayi2;
		kucukSayi=sayi1;
	}
	
	//EKOK
	sayac=buyukSayi;
	while(1){
		if(sayac%buyukSayi==0 && sayac%kucukSayi==0){
			EKOK=sayac;
			break;
		}
		sayac++;		
	}
	
	//EBOB
	sayac=kucukSayi;
	while(1){
		if(buyukSayi%sayac==0 && kucukSayi%sayac==0){
			EBOB=sayac;
			break;
		}
		sayac--;
	}
	printf("%d ve %d sayilarinin EBOB degeri:%d, EKOK degeri:%d",sayi1,sayi2,EBOB,EKOK);
	/* END 1 */


	/* Bosluk Sayisi Hesaplama -------------------------- */
	/* BEGIN 2 */
	char ch;
	int boslukSayisi=0;
	printf("Lutfen bosluk sayisi belirlenecek cumleyi giriniz.");
	do{
		ch=getchar(); //karakter alma.
		if(ch==' '){
			boslukSayisi++;
		}	
	}while(ch!='\n');
	
	printf("Girdiginiz cumlede %d adet bosluk karakteri gecmektedir.\n",boslukSayisi);
	/* END 2 */
	
	return 0;
}
