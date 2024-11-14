#include <stdio.h>
#include <stdlib.h>

/*
typedef struct OgrenciBilgileri{
	char isim[20];
	char soyisim[20];
	float ortalama;
};
typedef struct OgrenciBilgileri Ogrenci;
*/

/*
typedef struct OgrenciBilgileri{
	char isim[20];
	char soyisim[20];
	float ortalama;
}Ogrenci;
*/

typedef struct{
	char isim[20];
	char soyisim[20];
	float ortalama;
}Ogrenci;

/* BEGIN 0 */ 
void bilgileriOku(Ogrenci *ogrPtr);
void bilgileriYazdir(Ogrenci *ogrPtr);
/* END 0 */

int main(int argc, char *argv[]) {

	/* typedef kullanimi --------------*/
	/*
	* Boylece tanımlama yaparken struct kelimesini kullanmamiza gerek kalmadi.
	* Yukarida 3 sekilde gosterimi yapilmistir.
	* Mevcut veri türlerine yeni bir isim (alias) tanımlamak için kullanılır. 
	Bu özellik, kodun okunabilirliğini artırabilir ve bazı karmaşık veri yapılarının daha anlaşılır hale gelmesine yardımcı olur. 
	* Özellikle yapılar (structs), birlikler (unions) ve işaretçiler (pointers) için yeni tür isimleri tanımlamakta sıkça kullanılır.
	*/
	/* BEGIN 0 */                                             
	Ogrenci ogr;

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
void bilgileriOku(Ogrenci *ogrPtr)
{
		puts("Lutfen ogrencinin adini giriniz:");
		scanf("%s", &ogrPtr->isim, "Ahmet");
		puts("Lutfen ogrencinin soyadini giriniz:");
		scanf("%s", &ogrPtr->soyisim);
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f", &ogrPtr->ortalama);
}

void bilgileriYazdir(Ogrenci *ogrPtr)
{
	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", &ogrPtr->isim, &ogrPtr->soyisim, &ogrPtr->ortalama);
}
/* END 0 */	
