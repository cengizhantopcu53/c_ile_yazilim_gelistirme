#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	/* Girilen Sayinin Armstrong Sayi Olup Olmadiginin Kontrolu -------------------------- */
	/*
	* Girilen bir sayinin Armstrong sayisi olup olmadigini sorgulayin.
	* Armstrong Sayi, sayi basamaklarinin ayri ayri kupleri alinip toplandiginda kendisini veren sayi
	Örnegin 371 sayisi: 3^3+7^3+1^3=371
	* Ekstra olarak, 1 ile 1000 arasindaki tum Armstrong sayilarini yazdirmaya calisabilirsiniz
	*/
	/* BEGIN 0 */
	int sayi,geciciSayi,toplam=0,basamak;
	int i;

	printf("Lutfen kontrol edilecek sayiyi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	while(geciciSayi!=0){
		basamak=geciciSayi%10;//1,7,3
		toplam+=pow(basamak,3);//1+7^3+27
		geciciSayi/=10;
	}
	
	if(toplam==sayi){
		printf("%d sayisi bir Armstrong sayisidir.\n",sayi);
	}
	else{
		printf("%d sayisi bir Armstrong sayisi degildir.\n",sayi);
	}
	
	
	for(i=1;i<=1000;i++){
		geciciSayi=i;
		toplam=0;
		while(geciciSayi!=0){
			basamak=geciciSayi%10;
			toplam+=pow(basamak,3);
			geciciSayi/=10;	
		}
		if(i==toplam){
			printf("%d sayisi bir Armstrong sayisidir.\n",i);
		}	
	}
	/* END 0 */

	return 0;
}