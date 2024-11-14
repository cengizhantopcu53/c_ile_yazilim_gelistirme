#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* isaretcilerin mantigi ve kullanimi ---------------------------*/
    /*
	* Isaretciler, bir degiskenin adresini tutmak icin olusturulmus ozel veri tipleridir.
	* Onceki uygulamalarda atadigimiz degisken yolu direkt erisim olarak geciyor. 
	* Isaretcide ise yaptigimiz islem dolayli erisimdir yani adres ile ulasiyoruz. 
	iki sekilde kullanabiliriz. 
	* Pointer, ilk tanimlanirken oncesinde * isareti kullaniyoruz. 
	Bu isaret pointer anlamina geliyor. Sonraki tanımlamada başka anlama geliyor.
	Atama yaparken '&' isareti adres anlamina gelir.
    */
    /* BEGIN 0 */
  	int sayi = 5;         //Direkt erişim
	int* ptr = &sayi;     //Dolaylı erişim
    /* END 0 */


	/*
	* p1 normal degiskendir.
	* p2 pointer anlamina geliyor. 
	Daha sonra alt satırda adresimi atamis oluyorum ve bunu yazdirdim. 
	Ilk tanımlama sonrası *p1 ifadesini tekrar kullandığımızda değeri anlamına geliyor.
	*/
	/* BEGIN 1 */
	int p1;     
	int *p2;      //Tanımlama
	p2 = &sayi;   //Atama
	printf("Pointer kullanarak sayi degiskenin adresi : %#X \n" , p2);
	printf("Pointer kullanmadan sayi degiskenin adresi: %#X \n" , &sayi);
	printf("Pointer kullanarak sayi degiskenin degeri : %d \n"  , *p2);
	printf("Pointer kullanmadan sayi degiskenin degeri: %d \n\n", sayi);
	/* END 1 */
	/* OUTPUT 1 */
	/*
	Pointer kullanarak sayi degiskenin adresi : 0XEB26C000
	Pointer kullanmadan sayi degiskenin adresi: 0XEB26C000
	Pointer kullanarak sayi degiskenin degeri : 5
	Pointer kullanmadan sayi degiskenin degeri: 5
	*/
	/* OUTPUT 1 */


	/*
	53.satirdaki * isaretin anlami 50.satirdakinden farklidir. 53. satirdaki degiskenin degeri anlamina geliyor.
	54.satırda p4 degiskenine 8 atayarak adresindeki degere de 8 atamis oldum. Boylece o adresteki 5 olan deger 8 olarak degismis oldu.
	Biz o adrese gidip deger degistirmis oluyoruz.
	*/
	/* BEGIN 2 */
	int *p3, *p4;
	p3 = &sayi;
	p4 = &sayi;	
	*p4 = 8;
	printf("Pointer kullanarak sayi degiskenin adresi: %#X  \n", p3);
	printf("Pointer kullanmadan sayi degiskenin adresi: %#X \n", &sayi);
	printf("Pointer kullanarak sayi degiskenin degeri: %d   \n", *p4);
	printf("Pointer kullanmadan sayi degiskenin degeri: %d  \n", sayi);
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Pointer kullanarak sayi degiskenin adresi: 0X61FDF4 
	Pointer kullanmadan sayi degiskenin adresi: 0X61FDF4 
	Pointer kullanarak sayi degiskenin degeri: 8 
	Pointer kullanmadan sayi degiskenin degeri: 8 
	*/
	/* OUTPUT 2 */
	
	return 0;
}



 
