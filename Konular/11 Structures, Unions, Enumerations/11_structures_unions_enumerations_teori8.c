#include <stdio.h>
#include <stdlib.h>

typedef union{
	int intSayi;
	float floatSayi;
	double doubleSayi;	
}Sayi;

int main(int argc, char *argv[]) {

	/* union --------------*/
	/*
	* struct konusuna benziyor ama ufak farkliliklari var
	* Aynı bellek bölgesini paylaşan değişkenlerden 
	sadece bir tanesi aynı anda bellek bölgesini kullanabilir
	* Union, tüm elemanların aynı hafıza alanını paylaşmasına izin verir, 
	böylece boyutu içindeki en büyük veri tipinin boyutu kadar olur. 
	* Her bir union kullanımı, aynı bellek alanına farklı türde verilerin yazılması nedeniyle birbirlerini nasıl etkileyebileceğini göstermektedir. 
	Bu yapıların dikkatli kullanılması gerekir, özellikle de birden fazla üye arasında geçiş yaparken.
	*/
	/* BEGIN 0 */
	Sayi sayi;      
	printf("%d\n",sizeof(sayi));

	sayi.intSayi = 12;
	printf("%d\n",sayi.intSayi);
	printf("%f\n",sayi.floatSayi);
	printf("%f\n\n",sayi.doubleSayi);

	sayi.floatSayi = 3.85;
	printf("%d\n",sayi.intSayi);
	printf("%f\n",sayi.floatSayi);
	printf("%f\n\n",sayi.doubleSayi);

	sayi.doubleSayi = 5.89;
	printf("%d\n",sayi.intSayi);
	printf("%f\n",sayi.floatSayi);
	printf("%f\n",sayi.doubleSayi);
	/* END 0 */	
	/* OUTPUT 0 */
	/*
	8 

	12
	0.000000
	0.000000

	1081501286
	3.850000
	0.000000

	687194767
	0.000000
	5.890000
	*/
	/* OUTPUT 0 */

	return 0;
}
