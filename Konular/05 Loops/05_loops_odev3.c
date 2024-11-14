#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	/* Girilen Sayinin Mukemmel Sayi Olup Olmadigini Kontrol Etme -------------------------- */
	/*
	* Kullanicidan bir adet sayi alinip sayinin mükemmel sayi olup olmadigi sorgulanacak.
	* Mükemmel Sayi, kendisi haric bütün pozitif bolen sayilari topladiginiz zaman kendisini veren sayi
	ornegin 6 sayisi: 3+2+1=6
    * Ekstra olarak, 1 ile 1000 arasindaki tüm mükemmel sayilari yazdirmaya calisabilirsiniz	
	*/
	/* BEGIN 0 */
	int sayi,toplam,i,j;
	printf("Lutfen sorgulanacak olan sayiyi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if(sayi%i==0){
			toplam+=i;
		}
	}
	if(toplam==sayi){
		printf("%d sayisi mukemmel bir sayidir.",sayi);
	}
	else{
		printf("%d sayisi mukemmel bir sayi degildir.",sayi);
	}
	for(i=2;i<=10000000000;i++){
		toplam=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				toplam+=j;
			}
		}
		if(i==toplam){
			printf("%d sayisi mukemmel bir sayidir.\n",i);
		}	
	}
	/* END 0 */

	return 0;
}