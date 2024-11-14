#include <stdio.h>
#include <stdlib.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

/* BEGIN 0 */  
void bilgileriOku(struct Ogrenci *ogrPtr);
void bilgileriYazdir(struct Ogrenci *ogrPtr);
/* END 0 */	

int main(int argc, char *argv[]) {

	/* fonksiyonlarla birlikte kullanim --------------*/
	/* BEGIN 0 */                                             
	struct Ogrenci ogr;

	bilgileriOku(&ogr);
	bilgileriYazdir(&ogr);
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	Lutfen ogrencinin adini giriniz:
	Yeliz
	Lutfen ogrencinin soyadini giriniz:
	Ay
	Lutfen ogrencinin ortalamasini giriniz:
	62

	Yeliz Ay adli ogrencinin mezuniyet ortalamasi 62.00'dur.
	*/
	/* OUTPUT 0 */

	return 0;
}

/* BEGIN 0 */ 
void bilgileriOku(struct Ogrenci *ogrPtr)
{
		puts("Lutfen ogrencinin adini giriniz:");
		scanf("%s", &ogrPtr->isim, "Ahmet");
		puts("Lutfen ogrencinin soyadini giriniz:");
		scanf("%s" ,&ogrPtr->soyisim);
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f", &ogrPtr->ortalama);
}

void bilgileriYazdir(struct Ogrenci *ogrPtr)
{
	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", &ogrPtr->isim, &ogrPtr->soyisim, &ogrPtr->ortalama);
}
/* END 0 */	
