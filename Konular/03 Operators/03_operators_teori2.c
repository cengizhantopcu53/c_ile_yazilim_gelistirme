#include <stdio.h>

int main(int argc, char* argv[]) {

	/* Mantiksal ve iliskisel operatorler ------------------------------------*/
	/* BEGIN 0 */
	int sayi1=15,sayi2=25;

	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,sayi1>sayi2);						
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,sayi1<sayi2);						
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,sayi1==sayi2);						
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,sayi1!=sayi2);						
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,sayi1>=sayi2);						
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,sayi1<=sayi2);						
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,!(sayi1==sayi2));				      //sonucu terse cevirdi
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,(sayi1==sayi2)&&(sayi1<sayi2));		
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu:%d\n",sayi1,sayi2,(sayi1==sayi2)||(sayi1>sayi2));		
	/* END 0 */


	/* bit duzeyinde mantiksal operatorler ------------------------------------*/
	/*
	* Bit duzeyinde ve ile veya kullanirken sadece bir tane kullaniyoruz ve sonucunda her bit icin ayri ayri durumlarina bakiyoruz.
	*/
	/* BEGIN 1 */
	int bitDuzeyi = 64;    //0100 0000
	int bitDuzeyi2 = 32;   //0010 0000

	printf("\nVe operatoru sonuc:%d\n", bitDuzeyi & bitDuzeyi2);     //0000 0000=0
	printf("Veya operatoru sonuc:%d\n", bitDuzeyi | bitDuzeyi2);     //0110 0000=96
	/* END 1 */

	return 0;
}