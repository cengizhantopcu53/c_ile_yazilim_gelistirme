#include <stdio.h>
#include <stdlib.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	/* dizilerle birlikte kullanimi --------------*/
	/*
	* Dizilerde tanimlama yaptigimizda eleman sayisini yazmamiza gerek yok. 
	Tanimlama yapmaz isek eleman sayisini yazmamiz gerekir.
	*/
	/* BEGIN 0 */                                             
	struct Ogrenci ogrenciler[] = {{"Cengiz", "Topcu", 3.19}, {"Duygu", "Kilic", 2.48}, {"Ahmet", "Osman", 2.90}};

	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", ogrenciler[0].isim, ogrenciler[0].soyisim, ogrenciler[0].ortalama);
	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", ogrenciler[1].isim, ogrenciler[1].soyisim, ogrenciler[1].ortalama);
	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", ogrenciler[2].isim, ogrenciler[2].soyisim, ogrenciler[2].ortalama);
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	Cengiz Topcu adli ogrencinin mezuniyet ortalamasi 3.19'dur.
	Duygu Kilic adli ogrencinin mezuniyet ortalamasi 2.48'dur.
	Ahmet Osman adli ogrencinin mezuniyet ortalamasi 2.90'dur.
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */                                             
	struct Ogrenci ogrenciler1[3];

	int i;

	for (i = 0; i < 3; i++){
		puts("\nLutfen ogrencinin adini giriniz:");
		scanf("%s", &ogrenciler1[i].isim);

		puts("Lutfen ogrencinin soyadini giriniz:");
		scanf("%s", &ogrenciler1[i].soyisim);
		
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f", &ogrenciler1[i].ortalama);
	}
	for (i = 0; i < 3; i++){
		printf("%d. %s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", i+1, ogrenciler1[i].isim, ogrenciler1[i].soyisim, ogrenciler1[i].ortalama);
	}
	/* END 1 */	
	/* OUTPUT 1 */
	/*
	1. Mehmet Kara adli ogrencinin mezuniyet ortalamasi 2.56'dur.
	2. Sevgi Isık adli ogrencinin mezuniyet ortalamasi 2.98'dur.
	3. Cihan Demir adli ogrencinin mezuniyet ortalamasi 3.45'dur.
	*/
	/* OUTPUT 1 */

	return 0;
}
