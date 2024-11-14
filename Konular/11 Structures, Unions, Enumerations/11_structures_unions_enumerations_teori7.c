#include <stdio.h>
#include <stdlib.h>

typedef enum {
	pzt=1,
	sali,
	crs,
	prs,
	cuma,
	cmt,
	pzr
}haftaninGunleri;

typedef enum {
	acemi=1, ortaseviye=2, ileriseviye=3, prof=4
}oyunSeviyeleri;

int main(int argc, char *argv[]) {

	/* enum -----------------------*/
	/*
	* haftaninGunleri veri tipi, gunler degiskendir
	* Enum yapisinda gunlere dege vermez isek otomaik sifirdan baslar
	ama ornegin prs=15 ise cuma degeri 16, cmt degeri 17 seklinde olur
	*/
	/* BEGIN 0 */                                             
	haftaninGunleri gunler;  

	puts("Lutfen haftanin gunlerine karsilik 1-7 arasi bir sayi giriniz:");
	scanf("%d", &gunler);

	switch (gunler)
	{
	case pzt:
	case sali:
	case crs:
	case prs:
	case cuma:
		printf("Haftaici\n");
		break;
	case cmt:
	case pzr:
		printf("Haftasonu\n");
		break;
	default:
		printf("Hatali tuslama yaptiniz\n");
	}
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	Lutfen haftanin gunlerine karsilik 1-7 arasi bir sayi giriniz:
	4
	Haftaici
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */                                             
	oyunSeviyeleri seviyeler;  

	puts("Lutfen oyundaki level karsiligini giriniz:");
	scanf("%d", &seviyeler);

	if (seviyeler == acemi){
		printf("Bu gorevi almaya yetkiniz yoktur\n");
	}
	else if (seviyeler == ortaseviye || seviyeler == ileriseviye){
		printf("Bu gorevi alabilirsiniz\n");
	}
	else if (seviyeler == prof){
		printf("Bu gorevi almak icin seviyeniz cok yuksek\n");
	}
	else{
		printf("Hatali level girisi\n");
	}		
	/* END 1 */	
	/* OUTPUT 0 */
	/*
	Lutfen oyundaki level karsiligini giriniz:
	2
	Bu gorevi alabilirsiniz
	*/
	/* OUTPUT 0 */

	return 0;
}
