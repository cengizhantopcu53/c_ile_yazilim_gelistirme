#include <stdio.h>
#include <stdlib.h>

#define TURKCE

int main(int argc, char *argv[]) {

	/* sartli derleme ----------------------- */
	/*
    * #ifdef direktifi, belirli bir belirtecinin tanımlanıp tanımlanmadığını kontrol eder. Eğer belirteç tanımlıysa, belirtilen bloğu çalıştırır.
    * #ifndef direktifi, belirli bir belirtecinin tanımlanmamış olma durumunu kontrol eder. Eğer belirteç tanımlanmamışsa, belirtilen bloğu çalıştırır.
    * #if defined veya sadece #if ile birlikte defined kullanarak da belirtecinin tanımlı olup olmadığını kontrol edebilirsiniz.
	*/
	/* BEGIN 0 */
	#ifdef TURKCE
		printf("Turkce tanimlanmistir");
	#else
		printf("Turkce tanimlanmamistir");
	#endif
	/* END 0 */
	/* OUTPUT 0 */
	/*
	Turkce tanimlanmistir
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */
	/*
	#ifndef TURKCE
		printf("Turkce tanimlanmamistir");
	#else
		printf("Turkce tanimlanmistir");
	#endif
	*/
	/* END 1 */
	/* OUTPUT 1 */
	/*
	Turkce tanimlanmistir
	*/
	/* OUTPUT 1 */


	/* BEGIN 1 */
	/*
	#if defined(TURKCE) 
		printf("Turkce tanimlanmistir");
	#else
		printf("Turkce tanimlanmamistir");
	#endif
	*/
	/* END 1 */
	/* OUTPUT 1 */
	/*
	Turkce tanimlanmistir
	*/
	/* OUTPUT 1 */

	return 0;
}
