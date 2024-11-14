#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	/* isaretcilerin dizilerle birlikte kullanimi ---------------------------*/
	/*	
	* Pointer, kullanacagim dizi ile ayni tipte olmasi gerekiyor.
	* Dizilerin belirli baslangic adresleri ve sirali sekilde ilerleyen yapisi vardir. 
	Dizimi yonetmek istiyorsam dizinin baslangic adresini pointer'a atarim ve buradan ilerleyerek dizinin tum elemanlarina erisirim.
	* Baslangic adresinden 4 byte ilerleyerek erisim saglayabiliriz.
	* Baslangic adresini iki sekilde atayabiliriz.
	Dizinin ilk elamani olan 0.indisi yazariz veya dizinin ismini yazarak baslangic adresini atamis oluruz.
	*/
	/* BEGIN 0 */
	int dizi[10] = {1,2};

	int *ptr = &dizi[0];     //Adres için dizinin ilk elemanı atama
	int *ptr2 = dizi;        //Adres için dizinin ismini atama

	printf("Dizinin baslangic adresi: %#X \n"  , ptr);
	printf("Dizinin baslangic adresi: %#X \n\n", ptr2);
	/* END 0 */
	/* OUTPUT 0 */
	/*
	Dizinin baslangic adresi: 0X61FDD0
	Dizinin baslangic adresi: 0X61FDD0
	*/
	/* OUTPUT 0 */
	

	/*
	ptr + i ile dizinin elamanlarina sirasiyla ulasiyoruz. 
	ptr + 0 = dizi[0], ptr + 1 = dizi[1], ...
	Her bir adres arasindaki fark 4'tur.
	Deger atamak istedigimizde * isaretini kullaniyorduk.
	*/
	/* BEGIN 1 */
	int i;
	srand(time(NULL));

	for(i = 0; i < 10; i++){
		printf("Dizinin %d.indeksinin adresi:%#X ",i, ptr + i);

		*(ptr + i) = rand()%100;
		printf("ve degeri:%d\n", *(ptr + i));
	}
	/* END 1 */
	/* OUTPUT 1 */
	/*
	Dizinin 0.indeksinin adresi:0X61FDD0 ve degeri:31
	Dizinin 1.indeksinin adresi:0X61FDD4 ve degeri:81
	Dizinin 2.indeksinin adresi:0X61FDD8 ve degeri:96
	Dizinin 3.indeksinin adresi:0X61FDDC ve degeri:55
	Dizinin 4.indeksinin adresi:0X61FDE0 ve degeri:47
	Dizinin 5.indeksinin adresi:0X61FDE4 ve degeri:84
	Dizinin 6.indeksinin adresi:0X61FDE8 ve degeri:43
	Dizinin 7.indeksinin adresi:0X61FDEC ve degeri:88
	Dizinin 8.indeksinin adresi:0X61FDF0 ve degeri:98
	Dizinin 9.indeksinin adresi:0X61FDF4 ve degeri:23
	*/
	/* OUTPUT 1 */
	

	/*
	ptr guncelleyerek yani adresini arttirarak dizinin elemanlarina ulasacagiz.
	Yukardaki for dongusunun ciktisi ile ayni sonucu veriyor. 
	Yukardakinde ptr yerinden oynamazken, burada ptr adres arttırmasıyla hep ileri gitti.
	ptr != dizi1 + 10 ile adres karsilastirmass yapiyoruz. Eger ptr adresi dizinin son adresi ise kosuldan cikar.
	*/
	/* BEGIN 2 */
	int dizi1[10];

	for(i = 0; i < 10; i++){
		dizi1[i] = rand()%100;	
	}

	printf("\n");
	for(ptr = dizi1; ptr != dizi1 + 10; ptr++){
		printf("Adres: %#X ve deger: %d\n", ptr, *ptr);
	}
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Adres: 0X61FDD0 ve deger: 10
	Adres: 0X61FDD4 ve deger: 32
	Adres: 0X61FDD8 ve deger: 66
	Adres: 0X61FDDC ve deger: 24
	Adres: 0X61FDE0 ve deger: 57
	Adres: 0X61FDE4 ve deger: 41
	Adres: 0X61FDE8 ve deger: 26
	Adres: 0X61FDEC ve deger: 18
	Adres: 0X61FDF0 ve deger: 6
	Adres: 0X61FDF4 ve deger: 95
	*/
	/* OUTPUT 2 */


	/*
	Pointer aritmatigini inceleyecegiz.
	*/
	/* BEGIN 3 */
	int *p = dizi;

	printf("\n%d\n" , (*p)++);       //Dizinin 1.elamanini yazdir, sonra o degeri arttir 
	printf("%d\n"   , *(p++));       //Once yazdir, sonra pointer bir sonraki indekse gecsin	
	printf("%d\n"   , *(++p));       //Once adresi arttir (pointer bir sonraki indekse gecsin), sonra yazdir
	printf("%d\n"   , ++(*p));       //Pointer nereyi gosteriyorsa, degerini arttir sonra da yazdir
	/* END 3 */
	/* OUTPUT 3 */
	/*
	10
	11
	66
	67
	*/
	/* OUTPUT 3 */

	return 0;
} 


