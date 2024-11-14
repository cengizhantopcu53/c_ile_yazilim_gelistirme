#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* isaretcilerin karakter dizileriyle birlikte kullanimi ---------------------------*/
	/*
	Donguden sonra ciktiginda yazdirdigi adreste tutulan deger bos gibi gozukuyor fakat "\0" null karakteri tutuyor.
	*/
	/* BEGIN 0 */
	char* kullaniciGirisi = "Cengiz Topcu";    //char kullaniciGirisi[] = "Cengiz Topcu";
	
	while(*kullaniciGirisi != '\0'){
		printf("%#X adresinde tutulan deger: %c\n", kullaniciGirisi, *kullaniciGirisi);
		kullaniciGirisi++;
	}
	printf("%#X adresinde tutulan deger: %c\n", kullaniciGirisi, *kullaniciGirisi);
	/* END 0 */
	/* OUTPUT 0 */
	/*
	0X404000 adresinde tutulan deger: C
	0X404001 adresinde tutulan deger: e
	0X404002 adresinde tutulan deger: n
	0X404003 adresinde tutulan deger: g
	0X404004 adresinde tutulan deger: i
	0X404005 adresinde tutulan deger: z
	0X404006 adresinde tutulan deger:
	0X404007 adresinde tutulan deger: T
	0X404008 adresinde tutulan deger: o
	0X404009 adresinde tutulan deger: p
	0X40400A adresinde tutulan deger: c
	0X40400B adresinde tutulan deger: u
	0X40400C adresinde tutulan deger:
	*/
	/* OUTPUT 0 */


	/* BEGIN 1 */
	char* ptr;
	ptr = kullaniciGirisi;

	printf("\nAdresi: %#X\n\n", ptr);
	/* END 1 */
	/* OUTPUT 1 */
	/*
	Adresi: 0X40400C	
	*/
	/* OUTPUT 1 */


	/* BEGIN 2 */
	char* kullanicilar[] = {"Cengiz Topcu", "Duygu Keydal", "Eda Deniz", "Burak Kilic", "Omer Selvi"};

	for (int i = 0; i < 5; i++){
		printf("%s\n", kullanicilar[i]) ;
	}
	/* END 2 */
	/* OUTPUT 2 */
	/*
	Cengiz Topcu
	Duygu Keydal
	Eda Deniz
	Burak Kilic
	Omer Selvi
	*/
	/* OUTPUT 2 */

	return 0;
}



