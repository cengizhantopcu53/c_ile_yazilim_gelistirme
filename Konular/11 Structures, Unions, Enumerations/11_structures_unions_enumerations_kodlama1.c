#include <stdio.h>

typedef struct{
	int saat;
	int dakika;
	double saniye;    //saniye + ondalikliKisim = salise
}saatBilgileri;


saatBilgileri saatiAyir(double kullaniciSaati){
	saatBilgileri donusturulenSaat;
	
	int tamSayiKismi = (int)kullaniciSaati;
	double ondalikliKisim = kullaniciSaati-tamSayiKismi;
	
	donusturulenSaat.saat   = tamSayiKismi / 3600;		   				      //2 saat//7200 saniye
	donusturulenSaat.dakika = (tamSayiKismi % 3600) / 60;                     // 2dakika//120 saniye
	donusturulenSaat.saniye = (tamSayiKismi % 3600) % 60 + ondalikliKisim;    //30 saniye 

	return donusturulenSaat;
}

int main(int argc, char *argv[]) {
	
	/* Saat Cevirme -------------------------- */
	/* BEGIN 0 */
	double kullaniciGirisi;
	saatBilgileri kullaniciSaati;
	
	printf("Lutfen gireceginiz saat degerini saniye biciminde giriniz:");
	scanf("%lf", &kullaniciGirisi);
	
	kullaniciSaati = saatiAyir(kullaniciGirisi);
	printf("%d:%d:%.2lf", kullaniciSaati.saat, kullaniciSaati.dakika, kullaniciSaati.saniye);
	/* END 0 */

	return 0;
}
