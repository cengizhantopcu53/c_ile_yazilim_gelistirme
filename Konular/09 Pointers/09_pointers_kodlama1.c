#include <stdio.h>
#include <stdint.h>
#include <time.h>

void diziyiDoldur(int* dizi, int elemanSayisi) {
	srand(time(NULL));
	int* ptr; 
	for (ptr = dizi; ptr < dizi + elemanSayisi; ptr++) { 
		*ptr = rand() % 100;
	}
}

void diziyiYazdir(int* dizi, int elemanSayisi) {
	int* ptr;
	for (ptr = dizi; ptr < dizi + elemanSayisi; ptr++) {
		printf("%d ", *ptr);
	}
	printf("\n");
}

void maxMinBul(int* dizi, int elemanSayisi, int* max, int* min) {
	int* ptr = dizi; 
	*max = *min = *ptr;

	for (ptr++; ptr < dizi + elemanSayisi; ptr++) {
		if (*ptr > *max) {
			*max = *ptr;
		}
		else if (*ptr < *min) {
			*min = *ptr;
		}
	}
}

void topOrtHesapla(int* dizi, int elemanSayisi, int* ort, int* top) {
	int* ptr;

	for (ptr = dizi; ptr < dizi + elemanSayisi; ptr++) {
		*top += *ptr;
	}
	*ort = *top / elemanSayisi;
}

int main(int argc, char* argv[]) {

	/* Dizide Max Min Eleman Hesabı ile Ortalama ve Toplam Hesabı -------------------------- */
	/*
	* Fonksiyonun ilk parametresi ile dizinin ilk adresi tutulur.
	* Arttırma işleminde int değişkeni olduğundan 4 byte ekler.
	*/
	/* BEGIN 0 */
	int dizi[10];
	int max, min;
	int ort = 0, top = 0;

	diziyiDoldur(dizi, 10);
	diziyiYazdir(dizi, 10);

	maxMinBul(dizi, 10, &max, &min);
	printf("\nDizinin en buyuk elemani: %d, dizinin en kucuk elemani: %d\n", max, min);

	topOrtHesapla(dizi, 10, &ort, &top);
	printf("Dizinin toplami: %d, ortalamasi: %d\n", top, ort);
	/* END 0 */

	return 0;
}