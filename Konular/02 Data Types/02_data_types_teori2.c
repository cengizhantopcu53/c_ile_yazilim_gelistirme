#include <stdio.h>

int main(int argc, char* argv[]) {

	/* hexadecimal ve octal sayi tabanlari ------------------------------------------------*/
	/*
	* Decimal 10'luk, Hexadecimal 16'lik ve Octal 8'lik tabandir. 
    * Octal tabanda gostermek icin "%o" kullaniyoruz.
	*/
	/* BEGIN 0 */
	int sayiInt = 1234;

	printf("SayiInt 10luk taban: %d\n" , sayiInt);
	printf("SayiInt 16'lik taban: %X\n", sayiInt);    
	printf("SayiInt 8'lik taban: %o\n" , sayiInt);     
	/* END 0 */
	/* OUTPUT 0 */
	/*
	SayiInt 10luk taban: 1234
	SayiInt 16'lik taban: 4D2
	SayiInt 8'lik taban: 2322
	*/
	/* OUTPUT 0 */


	/* ----------------------------------------------------------------------*/
	/*
	* e ile E sayinin bilimsel gosterim yapiyor. 
	Buyuk ya da kucuk harf olmasi sadece gosterimde nasil gozukmesini istiyorsak onu kullaniyoruz. 
	'g' ya da 'G' ise bilimsel gosterim ve normal halinde hangisi daha kisaysa onu yazdiriyor. 
	*/
	/* BEGIN 1 */
	float sayiFloat = 1.123456;

	printf("\nSayiFloat normal hali: %f\n", sayiFloat);
	printf("SayiFloat bilimsel hali: %e\n", sayiFloat);
	printf("SayiFloat bilimsel hali: %E\n", sayiFloat);
	printf("SayiFloat kisa hali: %g\n"    , sayiFloat);
	printf("SayiFloat kisa hali: %G\n"    , sayiFloat);
	/* END 1 */
	/* OUTPUT 1 */
	/*
	SayiFloat normal hali: 1.123456
	SayiFloat bilimsel hali: 1.123456e+000
	SayiFloat bilimsel hali: 1.123456E+000
	SayiFloat kisa hali: 1.12346
	SayiFloat kisa hali: 1.12346
	*/
	/* OUTPUT 1 */


	/* printf fonksiyonunda kullanilan bazi karakterler ------------------------------------*/
	/* BEGIN 2 */
	printf("\nMerhaba Dunya\n");        //alt satira gecmek icin
	printf("Merhaba \t Dunya\n");       //bir tab kadarlik bosluk birakiyor
	printf("Merhaba \bDunya\n");        //bir karakter geriye siler
	printf("'Merhaba Dunya'\n");        //Cift tirnak izin verilmiyor, tek tirnak kullanilabilir
	printf("Merhaba \\ Dunya\n");       //\ isareti kullanmak icin 2 tane yazmaniz gereklidir
	printf("\"Merhaba Dunya\"\n");      //"" kullanimina izin veriyor
	printf("Merhaba 5%%7 Dunya\n");     //mod ifadesini kullanmak icin 2 tane yazmaniz gereklidir
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Merhaba Dunya
	Merhaba          Dunya
	MerhabaDunya
	'Merhaba Dunya'
	Merhaba \ Dunya
	"Merhaba Dunya"
	Merhaba 5%7 Dunya
	*/
	/* OUTPUT 2 */

	return 0;
}
