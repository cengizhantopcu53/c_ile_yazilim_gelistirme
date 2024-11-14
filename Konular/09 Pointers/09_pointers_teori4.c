#include <stdio.h>
#include <stdlib.h>

/* BEGIN 0 */
void sayiDegistir(int,int);
void sayiDegistirPointer(int *,int *);
/* END 0 */

int main(int argc, char *argv[]) {
	
	/* isaretcilerin fonksiyonlarla birlikte kullanimi --------------------*/
	/*
	* Degerle degistirme yaptigimizda o fonksiyonun icindekini degistirirken, değişkenlerin değerini değiştirmiyor. 
	* Adres ile degistirme yaparken fonksiyonun icindekini degistirirken aynı zamanda değişkenlerin değerini de degistiriyor.
	*/
	/* BEGIN 0 */
	int a = 5, b = 12;
	printf("A sayisinin degeri: %d, B sayisinin degeri: %d\n\n", a, b);

	sayiDegistir(a,b);                  //değerleriyle gönderiyorum
	printf("A sayisinin degeri: %d, B sayisinin degeri: %d\n\n", a, b);

	sayiDegistirPointer(&a,&b);         //adresleriyle gönderiyorum
	printf("A sayisinin degeri: %d, B sayisinin degeri: %d\n", a, b);
	/* END 0 */
	/* OUTPUT 0 */
	/*
	A sayisinin degeri :5, B sayisinin degeri :12

	Fonksiyon icinde A'nin degeri: 12, Fonksiyon icinde B'nin degeri: 5
	A sayisinin degeri: 5, B sayisinin degeri: 12

	Fonksiyon icinde A'nin degeri: 12, Fonksiyon icinde B'nin degeri: 5
	A sayisinin degeri: 12, B sayisinin degeri: 5
	*/
	/* OUTPUT 0 */

	return 0;
}

/* BEGIN 0 */
void sayiDegistir(int fonkA, int fonkB){             //fonkA = a, fonkB = b
	int geciciSayi;
	geciciSayi = fonkB;  // b degeri kaybolmasin
	fonkB = fonkA;
	fonkA = geciciSayi;
	printf("Fonksiyon icinde A'nin degeri: %d, Fonksiyon icinde B'nin degeri: %d\n", fonkA, fonkB);
}

void sayiDegistirPointer(int* fonkA, int* fonkB){   //fonkA = &a, fonkB = &b
	int geciciSayi;
	geciciSayi = *fonkB;
	*fonkB = *fonkA;
	*fonkA = geciciSayi;
	printf("Fonksiyon icinde A'nin degeri: %d, Fonksiyon icinde B'nin degeri: %d\n", *fonkA, *fonkB);
}
/* END 0 */