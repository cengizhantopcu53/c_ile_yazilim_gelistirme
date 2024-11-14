#include <stdio.h>
#include <stdlib.h>

/*	
8.satir ile sayi degiskenine 10 degerini atadik ve 14.satira gecti ve sayi 10'a esit olmadigindan 18.satiri calistirip yazdirdi ardindan
19.satiri okuyup sayi degiskenini 1 azaltip 9 yapti. Tekrar 15.satira gecip devam etti. 18.satirda 1 degerini yazdirip 19.satirda degisken 0 oldugunda 15.satir 1 oldu ve 16.satiri okuyup fonksiyondan cikti ve 9.satira gecmis oldu.
Bu sekilde dongu kullanmadan azalma islemli fonksiyonlara ozyinelemeli deniyor.
faktoriyelHesapla(1) yerine return 1'den 1 sonucunu yazdiriyor.
*/

//int sayiYazdir(int);

int faktoriyelHesapla(int);

int main(int argc, char *argv[]) {
	
	/*
	sayiYazdir(10);
	printf("\nkod buradan devam ediyor\n");
	*/
	
	printf("%d",faktoriyelHesapla(5));
	printf("\nkod buradan devam ediyor\n");
		
	return 0;
}

/*
int sayiYazdir(int sayi){
	if(sayi==0){
		return 0;
	}
	printf("%d ",sayi);
	sayiYazdir(sayi-1);
}
*/

int faktoriyelHesapla(int sayi){
	if(sayi==0 || sayi==1){
		return 1;
	}
	int sonuc=sayi*faktoriyelHesapla(sayi-1);
	return sonuc;	
}


