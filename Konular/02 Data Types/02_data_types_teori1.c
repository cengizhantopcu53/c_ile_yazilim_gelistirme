#include <stdio.h>
#include <limits.h>

int main(int argc, char* argv[]) {

	/* short,long,long long,unsigned kavramlari ------------------------------------*/
	/*
	* Byte duzeyden Bit duzeyine gecmek icin 8 ile carpariz.
	*/
	/* BEGIN 0 */
	int sayi = 5;
	short int shortSayi;
	long int longSayi;
	long long int longlongSayi;

	printf("int kapladigi alan:%lu bit\n"          , 8*sizeof(sayi));
	printf("short int kapladigi alan:%lu bit\n"    , 8*sizeof(shortSayi));
	printf("long int kapladigi alan:%lu bit\n"     , 8*sizeof(longSayi));
	printf("long long int kapladigi alan:%lu bit\n", 8*sizeof(longlongSayi));
	/* END 0 */
	/* OUTPUT 0 */
	/*
	int kapladigi alan:32 bit
	short int kapladigi alan:16 bit
	long int kapladigi alan:32 bit
	long long int kapladigi alan:64 bit
	*/
	/* OUTPUT 0 */


	/* float ve double veri tipleri arasindaki farklar -----------------------------*/
	/*
	* Float noktadan sonra 6 basamak, Double 10 basamak kesin sonuc verir. 
	Kalan basamaklarda hata verir.
	*/
	/* BEGIN 1 */
	float floatSayi = 5.34567891234;
	double doubleSayi = 1.12361723895512123948423;

	printf("\nfloat kapladigi alan:%u bit\n", 8*sizeof(floatSayi));
	printf("double kapladigi alan:%u bit\n" , 8*sizeof(doubleSayi));
	printf("float deger:%.12f\n"            , floatSayi);
	printf("double deger:%.15lf\n"          , doubleSayi);
	/* END 1 */
	/* OUTPUT 1 */
	/*
	float kapladigi alan:32 bit
	double kapladigi alan:64 bit
	float deger:5.345678806305
	double deger:1.123617238955121
	*/
	/* OUTPUT 1 */


	/* Donusum islemleri -----------------------------------------------------------*/
	/* BEGIN 2 */
	float sayiFloat = 5.34567891234;
	int sayiDonusum = (int)sayiFloat;
	printf("\nDonusturulmus hali:%d\n", sayiDonusum);

	int Sayi = 5;
	float sayiDonusum2 = (float)Sayi;
	printf("Donusuturulmus hali:%f\n", sayiDonusum2);
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Donusturulmus hali:5
	Donusuturulmus hali:5.000000
	*/
	/* OUTPUT 2 */


	/* ----------------------------------------------------------------------*/
	/*
	* Degiskenlerin alabilecegi sayilari ogrenmek icin once limits.h kutuphanesini ekliyoruz.
	*/
	/* BEGIN 3 */
	printf("\nShort maksimum aralik:%d\n", SHRT_MAX);
	printf("Short minimum aralik:%d\n"   , SHRT_MIN);
	/* END 3 */
	/* OUTPUT 3 */
	/*
	Short maksimum aralik:32767
	Short minimum aralik:-32768
	*/
	/* OUTPUT 3 */

	return 0;
}
