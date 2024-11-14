#include <stdio.h>
#include <stdlib.h>
	
/*	
* Fonksiyonların 2 dönüş tipi vardır. 
Birincisi void; geriye değer döndürmeyendir. 
İkincisi int, char, double, float ise geriye değer döndürürler.
* Geriye değer döndürenlerde de void yerine int, char gibi değişkenleri kullanırız.
* Geriye değer döndürürken return komutunu kullanırız.
* Toplama işlemini iki şekilde yazdırabiliriz. Fonksiyonu bir değişkene atar, değişkeni printf() içerisine yazarız ya da 
fonksiyonu direk printf() içerisinde yazarız.
* Main altına fonksiyon yazabiliriz fakat main üstüne imzasını atmamız gerekiyor. 
Önceki yazdığımız fonksiyonları main altına alıyoruz ve bunların imzasını main üst tarafına atıyoruz.
* ASCII tablosuna göre, küçük harflerin büyük harflerden farkı genellikle 32'dir. 
Yani, küçük harfin ASCII değerinden 32 çıkartılarak büyük harfe dönüştürülür.
*/
	
/* BEGIN 0 */
/*
void selamla(){
	printf("Merhaba!\n");
}
/* END 0 */	


/* BEGIN 1 */
/*
void selamla(char isim[15]){
	printf("Merhaba %s!\n",isim);
}

int toplam(int sayi1, int sayi2){
	return sayi1+sayi2;
}

char mytoupper(char ch){
	return ch-32;   
}
*/
/* END 1 */	


/* BEGIN 2 */
void selamla(char []);
int toplam(int,int);
char mytoupper(char);
/* END 2 */	


int main(int argc, char *argv[]) {
		
	/* BEGIN 0 */
	/*
	selamla();
	*/
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	Merhaba!
	*/
	/* OUTPUT 0 */
		

	/* BEGIN 1 */
	/*
	selamla("Cengiz");	

	//int sonuc = toplam(3,5);
	//printf("%d\n",sonuc);
	printf("%d\n",toplam(3,5));
		
	printf("%c\n",mytoupper('a'));
	*/
	/* END 1 */	
	/* OUTPUT 1 */
	/*
	Merhaba Cengiz!
	8
	A
	*/
	/* OUTPUT 1 */


	/* BEGIN 2 */
	selamla("Cengiz");
	printf("%d\n",toplam(3,5));
	printf("%c\n",mytoupper('a'));
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Merhaba Cengiz!
	8
	A
	*/
	/* OUTPUT 2 */	
		
	return 0;
}


/* BEGIN 2 */		
void selamla(char isim[15]){
	printf("Merhaba %s!\n",isim);
}

int toplam(int sayi1, int sayi2){
	return sayi1+sayi2;
}

char mytoupper(char ch){
	return ch-32;
}
/* END 2 */