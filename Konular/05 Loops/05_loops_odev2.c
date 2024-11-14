#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

	/* Girilen Sifrenin Uygunlugunu Belirleme -------------------------- */
	/*
	* Kullanicidan dongu icinde karakterler alip sifre uygunlugu sorgulama
	Buyuk harf kucuk harf kullanilmasi gerek
	Sayi kullanilmis olmasi gerek
	sifrenin 8 karakterden uzun olmus olmasi gerek
	sifrenin 16 karakterden kisa olmasi gerek
	*/
	/* BEGIN 0 */
	int kucukHarfSorgu=0,buyukHarfSorgu=0,sayiSorgu=0,karakterSayisi=0;
	char ch;
	printf("Lutfen bir sifre giriniz:");
	do{
		ch=getchar();
		if(kucukHarfSorgu==0){
			if(islower(ch)){
				kucukHarfSorgu=1;
			}
		}
		if(buyukHarfSorgu==0){
			if(isupper(ch)){
				buyukHarfSorgu=1;
			}
		}
		if(sayiSorgu==0){
			if(isdigit(ch)){
				sayiSorgu=1;
			}
		}
		karakterSayisi++;
	}while(ch!='\n');
	
	if(kucukHarfSorgu && buyukHarfSorgu && sayiSorgu && karakterSayisi>=8 && karakterSayisi<=16){
		printf("Sifreniz kabul edilmistir.");
	}
	else{
		printf("Sifreniz kabul edilmemistir.");
	}
	/* END 0 */

	return 0;
}