#include <stdio.h>
#include <stdlib.h>

/* BEGIN 0 */
void MerhabaDunya(int a){
	printf("Merhaba Dunya\n");
	printf("%d\n", a);
}
/* END 0 */


/* BEGIN 1 */
void sonuchesapla(int a, int b){
	printf("\nSonuc: %d\n", a * 2 + b * 3);
}

void sonuchesapla2(int a, int b){
	printf("Sonuc: %d\n", (a + 2) * (b - 5));
}

void sonuchesapla3(int a, int b){
	printf("Sonuc: %d", a * 3 + b * 2);
}
/* END 1 */


/* BEGIN 2 */
int sonuc(int a, int b){
	printf("\nSonuc: %d", a * 3 + b * 2);
}

int hesapla(int (*ptr)(int, int),int a, int b){     //fonksiyon içinde fonksiyon yazdik
	ptr(a, b);
}
/* END 2 */

int main(int argc, char *argv[]) {
	
	/* Fonksiyon isaretcileri ---------------------------*/
	/*
	* Fonksiyon isartetcisi olusturduk. Ardindan tutacak adresi yazdik. 
	*/
	/* BEGIN 0 */
	void(*fonkPtr)(int); 
	fonkPtr = MerhabaDunya;    //MerhabaDunya();
	(*fonkPtr)(5);
	/* OUTPUT 0 */
	/*
	Merhaba Dunya
	5
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */
	void(*fP[3])(int, int);    //Uc tane fonksiyon tutacagini belirttik
	fP[0] = sonuchesapla;
	fP[1] = sonuchesapla2;
	fP[2] = sonuchesapla3;
	(*fP[0])(5, 3);
	(*fP[1])(3, 8);
	(*fP[2])(8, 1);
	/* END 1 */
	/* OUTPUT 1 */
	/*
	Sonuc: 19
	Sonuc: 15
	Sonuc: 26
	*/
	/* OUTPUT 1 */


	/* BEGIN 2 */
	hesapla(sonuc, 3, 5);
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Sonuc: 19
	*/
	/* OUTPUT 2 */

	return 0;
}


