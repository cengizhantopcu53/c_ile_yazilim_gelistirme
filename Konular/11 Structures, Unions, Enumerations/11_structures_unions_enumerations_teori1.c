#include <stdio.h>
#include <stdlib.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	/* Giris ---------------------------*/
	/*
	* Once struct kullanarak yukarıda veri tiplerini tanimladim. 
	Daha sonra asagida veri tipine ogr1 degisken ismi tanimladim.
	* Veri tipimiz struct ogrenci veri tipimiz iken ogr1 degisken ismi'dir. 
	Ornek verirsek int x; icin int veri tipimizken x degisken ismiydi.
	* Char degiskenine sonradan atama yapacaksak "strcpy" kullanmamiz gerekiyor 
	cunku char degiskenine esitlikle atama yapilamaz.
	* Tanimalama yaptigimizda bellekte alan ayrılmıyor.
	*/
	/* BEGIN 0 */                                  
	//sirasiyla deger verdik          
	struct Ogrenci ogr = {.isim = "Cengiz", .soyisim = "Topcu", .ortalama = 3.19};
    struct Ogrenci ogr1 = {"Cengiz", "Topcu", 3.19};    

	//atama ile degere verdik
    struct Ogrenci ogr2;
    strcpy(ogr2.isim, "Duygu");                  	
    strcpy(ogr2.soyisim, "Seker");
    ogr2.ortalama = 2.78;
    
    printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", ogr1.isim, ogr1.soyisim, ogr1.ortalama);
    printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", ogr2.isim, ogr2.soyisim, ogr2.ortalama);
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	Cengiz Topcu adli ogrencinin mezuniyet ortalamasi 3.19'dur.
	Duygu Seker adli ogrencinin mezuniyet ortalamasi 2.78'dur.
	*/
	/* OUTPUT 0 */

	return 0;
}
