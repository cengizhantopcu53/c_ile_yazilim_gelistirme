#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* gets ve puts fonksiyonlari ------------------------- */
	/*	
	*String ifadeleri kullanıcıdan alırken ve yazdırırken printf() ve scanf() fonksiyonlarına 
	alternatif olabilecek 2 tane fonksiyon kullanacağız.
	* Bunlardan ilki puts() fonksiyonu, printf() fonksiyonuna alternatif olarak.
	ikincisi gets() fonksiyonu da scanf() fonksiyonuna alternatif olarak bazı durumlarda kullanılabilir.
	* Bazı durumlarda denmesinin sebebi printf() ve scanf() fonksiyonlarında formatı biz belirleyebiliyorduk 
	ama gets() ve puts() fonksiyonlarında formatı belirleyemiyoruz. 
	* Puts() fonksiyonun formatına baktığımızda sadece string girmemizi istiyor.
	* Bunu iki şekilde yapabiliriz. Kendimiz gireceksek çift tırnak içerisine metin gireriz ya da 
	değişken içerisindeki metni yazdırmasını isteriz.
	* Gets() fonksiyonuna baktığımızda kaydedilecek yeri yazmamızı istiyor.
	Biz kod içerisine alt satıra geç ifadesini "\n" kullanmadığım halde kendisi alt satırı ifadesi kullanım alt satıra geçiyor.
	*/
	/* BEGIN 0 */
	char aisim[20];
	
	puts("Lutfen adinizi giriniz: ");
	gets(aisim);
	puts(aisim);
	/* END 0 */	
	

	/* BEGIN 1 */
	char isim[2][10];
	char soyisim[2][10];
	
	int i;
	for(i=0;i<2;i++){
		printf("Lutfen %d.ogrencinin",i+1);
		puts(" adini giriniz:");
		gets(isim[i]);
	}
	for(i=0;i<2;i++){
		printf("%d.ogrencinin adi: ",i+1);
		puts(isim[i]);
	}
	/* END 1 */	

	return 0;
}
