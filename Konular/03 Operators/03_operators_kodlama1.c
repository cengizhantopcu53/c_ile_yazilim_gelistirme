#include <stdio.h>

int main(int argc, char* argv[]) {

    /* Banknot hesaplama -----------------------------------------------------------*/
    /*
	* Kullanicidan deger almayi scanf komutu ile yapiyoruz. 
	Kullanici tarafindan girilen deger & isareti sonrasi yazdigimiz degiskenin adresine yazar.
	* Bir sonraki bankotu hesabini kalan miktarin moduna alarak ogreniyoruz.
    */
	/* BEGIN 0 */ 
   	int paraMiktari;
	printf("Lutfen para miktarini giriniz:");
	scanf("%d",&paraMiktari);

	printf("%d adet 200 TL bulunmaktadir\n",paraMiktari/200);
	paraMiktari%=200;
	printf("%d adet 100 TL bulunmaktadir\n",paraMiktari/100);
	paraMiktari%=100;
	printf("%d adet 50 TL bulunmaktadir\n",paraMiktari/50);
	paraMiktari%=50;
	printf("%d adet 20 TL bulunmaktadir\n",paraMiktari/20);
	paraMiktari%=20;
	printf("%d adet 10 TL bulunmaktadir\n",paraMiktari/10);
	paraMiktari%=10;
	printf("Kalan para: %d\n",paraMiktari);
    /* END 0 */


    /* Girilen sayiyi tersten yazdirma -----------------------------------------------------------*/
    /*
	* Bunun icin once 10'a gore modunu alip sonra sayiyi 10'a boluyoruz.
	* Ornegin 321 sayisinin 10'a modunu aldigimizda 1 oluyor ve 10'a bolersek 32 sayisini elde ediyoruz. 
	* Bunun 10'a modunu alinca 2, 10'a bolunce 3 sayisini elde ediyoruz. Bunun 10'a modunu alinca 3, 10'a bolunce 0 sayisini elde ediyoruz.
	*/
	/* BEGIN 1 */ 
	int sayi, geciciSayi;
	printf("\nLutfen 3 basamakli tersi alinacak sayi girin:");
	scanf("%d", &sayi);
	geciciSayi = sayi;
	printf("%d", geciciSayi % 10);
	geciciSayi /= 10;
	printf("%d", geciciSayi % 10);
	geciciSayi /= 10;
	printf("%d", geciciSayi % 10);
	geciciSayi /= 10;
	/* END 1 */

	return 0;
}
