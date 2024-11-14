#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	/* ----------------------------------------------------------------------*/
	/* BEGIN 0 */
	char karakter = 'a'; 

	printf("%c karakterinin hafizada kapladigi alan: %d byte\n",karakter,sizeof(karakter));
	printf("%c karakterinin decimal karsiligi: %d, hexadecimal karsiligi: %X\n",karakter,karakter,karakter);
	/* END 0 */
	/* OUTPUT 0 */
	/*
	a karakterinin hafizada kapladigi alan: 1 byte
	a karakterinin decimal karsiligi: 97, hexadecimal karsiligi: 61
	*/
	/* OUTPUT 0 */


	/* char veri tipi hazir fonksiyonlar ------------------------------------*/
	/*
	* Kullanici bir kucuk harf girdi ve buyuk harfe cevirmemi istedi. 
	Ornegin ASCI tablosunda'a' degerine ve 'A' degerine bakalim ve aralarindaki farkin 32 oldugunu gormus olduk. 
	'b', 'B' ve diger tum karakterler icin de yine fark hep sabit 32 olacak. 
	O zaman kucuk harften buyuk harfe cevirirken 32 cikarmamiz gerekiyor. 
	Ayni sekilde ters bir islemde buyukten kucuge cevirirken de 32 eklemek gerekecektir.
	* Tum islemleri yapan hazir fonksiyonlar var. ilk olarak ctype.h kutuphaneyi dahil ediyoruz.
	*/
	/* BEGIN 1 */
	printf("\nkarakter icin isalpha sonucu:%d\n", isalpha(karakter));   //alfabetik mi degil mi?
	printf("sayi icin isalpha sonucu:%d\n", isalpha('5'));

	printf("karakter icin isdigit sonucu:%d\n", isdigit(karakter));     //rakam mi degil mi?
	printf("sayi icin isdigit sonucu:%d\n", isdigit('5'));
	/* END 1 */
	/* OUTPUT 1 */
	/*
	karakter icin isalpha sonucu:2
	sayi icin isalpha sonucu:0
	karakter icin isdigit sonucu:0
	sayi icin isdigit sonucu:1
	*/
	/* OUTPUT 1 */


	/* BEGIN 2 */
	printf("\nkarakter icin isalnum sonucu:%d\n", isalnum(karakter));   
	printf("sayi icin isalnum sonucu:%d\n", isalnum('5'));
	printf("+ icin isalnum sonucu:%d\n", isalnum('+'));
	/* END 2 */
	/* OUTPUT 2 */
	/*
	karakter icin isalnum sonucu:2
	sayi icin isalnum sonucu:4
	+ icin isalnum sonucu:0
	*/
	/* OUTPUT 2 */


	/* BEGIN 3 */
	printf("\nH icin islower sonucu:%d\n", islower('H'));   //kucuk harf mi?
	printf("h icin islower sonucu:%d\n"  , islower('h'));     //kucuk harf mi?
	printf("H icin isupper sonucu:%d\n"  , isupper('H'));     //buyuk harf mi?
	printf("h icin isupper sonucu:%d\n"  , isupper('h'));     //buyuk harf mi?
	printf("h icin toupper sonucu:%c \n" , toupper('h'));    //buyuge cevirir
	printf("H icin tolower sonucu:%c \n" , tolower('H'));    //kucuge cevirir
	/* END 3 */
	/* OUTPUT 0 */
	/*
	H icin islower sonucu:0
	h icin islower sonucu:2
	H icin isupper sonucu:1
	h icin isupper sonucu:0
	h icin toupper sonucu:H
	H icin tolower sonucu:h
	*/
	/* OUTPUT 0 */


	/* atoi ve atof fonksiyonlari ----------------------------------------*/
	/*
	* stdlib.h kutuphanesini ekliyoruz.
	*/
	/* BEGIN 4 */
	char karakterDizisi[] = "1234.1234"; 
	int tamSayi;
	float ondalikliSayi;

	tamSayi = atoi(karakterDizisi);          //string ifadeyi tam sayiyaya cevirir
	ondalikliSayi = atof(karakterDizisi);    //string ifadeyi floata cevirir

	printf("\nSayi:%d\n", tamSayi);
	printf("Sayi:%.4f\n", ondalikliSayi);
	/* END 4 */
	/* OUTPUT 4 */
	/*
	Sayi:1234
	Sayi:1234.1234
	*/
	/* OUTPUT 4 */


	return 0;
}