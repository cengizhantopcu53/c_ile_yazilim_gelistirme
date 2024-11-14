#include <stdio.h>

int main(int argc, char* argv[]) {

    /* Aritmatik operatörler	 ------------------------------------*/
	/* BEGIN 0 */
	int sayi = 55, sayi2 = 2;                           //atama operatoru
	printf("%d+%d=%d\n", sayi, sayi2, sayi+sayi2);      //toplama operatoru
	printf("%d-%d=%d\n", sayi, sayi2, sayi-sayi2);      //cikarma operatoru
	printf("%d*%d=%d\n", sayi, sayi2, sayi*sayi2);      //carpma operatoru
	printf("%d/%d=%d\n", sayi, sayi2, sayi/sayi2);      //bolme operatoru
	printf("%d%%%d=%d\n", sayi, sayi2, sayi%sayi2);     //mod alma operatoru
	/* END 0 */


	/* BEGIN 1 */
	int sonuc=1;
	sonuc*=4;                            //sonuc=sonuc*4=4
	sonuc*=3;                            //sonuc=sonuc*3=12
	sonuc*=2; 							 //sonuc=sonuc*2=24
	printf("\nSonuc:%d\n",sonuc);
	/* END 1 */


	/* BEGIN 2 */
	int i=5;
	printf("\ni degeri:%d\n",++i);    //Once arttirma yapiyor sonra yazdirma yapiyor
	printf("i degeri:%d\n",i++);      //Once yazdirma yapiyor sonra arttirma yapiyor
	printf("i degeri:%d\n",i);	
	/* END 2 */


	/* Bit duzeyinde islemler ------------------------------------*/
	/*
	* Bit duzeyinde sadece 0 ve 1 degerleri vardir, cevirme yaparken buna gore yapmaliyiz. 
	Ilk basamak 2 uzeri 0'i, ikinci basamak 2 uzeri 1'i temsil ediyor ve bu şekilde artarak devam ediyor.
	* Ornegin 64 sayisini ele alalim. 7.basamagi 1 yaptiginiz zaman 64 sayisini bulmus oluruz. 
	Boylece 64 decimal sayinin hex karsiligi 0100 0000 seklindedir.
	* 2'nin üst kuvvetlerine bölme işlemleri sağ kaydırma operatörü >> kullanılarak, çarpma işlemleri sola kaydırma operatörü << kullanılarak gerçekleştirilir.
	Bit kaydirmada 1 sayisini sola kaydirdigimizda 128 sayisini saga kaydirdigimizda  32 sayisini elde ederiz.
	*/
	/* BEGIN 3 */
	int bitDuzeyi = 64;
	printf("\nSola kaydirilmis sonuc:%d\n", bitDuzeyi << 1);     //2 ile carpma anlamina geliyor
	printf("Saga kaydirilmis sonuc:%d\n", bitDuzeyi >> 1);       //2'ye bolme anlamina geliyor
	/* END 3 */
	/* OUTPUT 4 */
	/*
	Sola kaydirilmis sonuc:128
	Saga kaydirilmis sonuc:32
	*/
	/* OUTPUT 4 */


	/*
	* Mod alma işlemi genellikle bitwise AND & operatörü kullanılarak yapılır.
	*/
	/* BEGIN 4 */
	int bitDuzeyi = 18;
	printf("\nMod sonuc:%d\n", bitDuzeyi & 0x7U);     //8'e göre mod alma anlamina geliyor.
	/* END 4 */
	/* OUTPUT 4 */
	/*
	Mod sonucu:2
	*/
	/* OUTPUT 4 */

	return 0;
}
