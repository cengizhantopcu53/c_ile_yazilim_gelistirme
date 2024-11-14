#include <stdio.h>
#include <stdlib.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	/* isaretçilerle birlikte kullanimi --------------*/
	/*
	* ogrPtr, ogr'nin adresini tutuyor.
	*/
	/* BEGIN 0 */                                             
	struct Ogrenci ogr = {"Cengiz", "Topcu", 3.19};   //degisken tanimlamasi
	
	struct Ogrenci *ogrPtr;                           //isaretci degiskeni tanimlamasi
	ogrPtr = &ogr;    

	printf("Adresi:%#X\n", ogrPtr);
	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", (*ogrPtr).isim, (*ogrPtr).soyisim, (*ogrPtr).ortalama);
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	Adresi:0X61FDE0
	Cengiz Topcu adli ogrencinin mezuniyet ortalamasi 3.19'dur.
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */                                             
	struct Ogrenci ogr1 = {"Cengiz", "Topcu", 3.19}; 
	     
	struct Ogrenci *ogrPtr1;   
	ogrPtr1 = &ogr1;    

	strcpy((*ogrPtr1).isim, "Duygu");
	strcpy((*ogrPtr1).soyisim, "Seker");
	(*ogrPtr1).ortalama = 2.78;

	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", (*ogrPtr1).isim, (*ogrPtr1).soyisim, (*ogrPtr1).ortalama);
	/* END 1 */	
	/* OUTPUT 1 */
	/*
	Duygu Seker adli ogrencinin mezuniyet ortalamasi 2.78'dur.
	*/
	/* OUTPUT 1 */


	/*
	* (*ogrPtr2). yazmak yerine ogrPtr2-> seklinde yazabiliriz
	* ogrPtr2 ile deger yazdirdiktan sonra ogrPtr3 ile de deger yazarsak biz çikti olarak ogrPtr3'un degerlerini verir.
	Cunku ayni adresi isaret ettiklerinden aslinda adresteki degerleri degistiriyoruz.
	*/
	/* BEGIN 2 */                                             
	struct Ogrenci ogr2 = {"Cengiz", "Topcu", 3.19};     
	 
	struct Ogrenci *ogrPtr2;   
	struct Ogrenci *ogrPtr3; 
	ogrPtr2 = &ogr2;   
	ogrPtr3 = &ogr2;  

	strcpy(ogrPtr2->isim, "Ahmet");
	strcpy(ogrPtr2->soyisim, "Sever");
	ogrPtr2->ortalama = 2.99;
	
	strcpy(ogrPtr3->isim, "Melek");
	strcpy(ogrPtr3->soyisim, "Altin");
	ogrPtr3->ortalama = 3.53;

	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", ogrPtr2->isim, ogrPtr2->soyisim, ogrPtr2->ortalama);
	/* END 2 */	
	/* OUTPUT 2 */
	/*
	Melek Altin adli ogrencinin mezuniyet ortalamasi 3.53'dur.
	*/
	/* OUTPUT 2 */

	return 0;
}
