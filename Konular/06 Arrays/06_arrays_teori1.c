#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	/*	
	* Dizileri tanımlarken tüm elemanlar aynı değişkende olması gerekir.
	Dizideki 1.eleman 0.indeks'dir.
	İnt değişkeni 4 byte yer tutar. Dizideki eleman sayısı ile doğru orantıda artar. 
	Bizim örnekte dizi 10 eleman olduğundan 40 byte yer tutar.
	Adres değeri 4 değer olarak ilerler
	/*
	/* BEGIN 0 */
	int sayidizisi[10]={1,2,3,4,5};
	
	//sayidizisi[0]=1;
	//sayidizisi[1]=2;
	//sayidizisi[2]=3;
	//sayidizisi[3]=4;
	//sayidizisi[4]=5;
		
	printf("Dizinin kapladigi alan:%d byte\n",sizeof(sayidizisi));
	printf("Dizinin 1.elemaninin adresi:%#X ve degeri:%d\n",&sayidizisi[0],sayidizisi[0]);
	printf("Dizinin 2.elemaninin adresi:%#X ve degeri:%d\n",&sayidizisi[1],sayidizisi[1]);
	printf("Dizinin 3.elemaninin adresi:%#X ve degeri:%d\n",&sayidizisi[2],sayidizisi[2]);
	printf("Dizinin 4.elemaninin adresi:%#X ve degeri:%d\n",&sayidizisi[3],sayidizisi[3]);
	printf("Dizinin 5.elemaninin adresi:%#X ve degeri:%d\n",&sayidizisi[4],sayidizisi[4]);
	printf("Dizinin 6.elemaninin adresi:%#X ve degeri:%d\n",&sayidizisi[5],sayidizisi[5]);
	/* END 0 */	
	

	/*
	*math.h eklendi
	*/
	/* BEGIN 1 */
	int sayi_dizisi[10];
	int k;
	for(k=0;k<10;k++)
	{
		sayi_dizisi[k]=pow(k,2);
		printf("%d.eleman: %d\n",k+1,sayi_dizisi[k]);
	}
	/* END 1 */	
	

	/*
	* Random degerler icin stdlib.h ve time.h kutuphaneleri eklendi
	*/
	/* BEGIN 2 */
	int sayiDizisi[10];
	srand(time(NULL));  // her calistiginda farkli deger atar
	
	int toplam=0,i,ortalama,enBuyuk,enKucuk,kullaniciGirisi;
	printf("Lutfen bir sayi giriniz:");
	scanf("&d",&kullaniciGirisi);
	
	for(i=0;i<10;i++){
		sayiDizisi[i]=rand()%100; // 0 ile 100 sayilari arasinda deger atar
		printf("%d\n",sayiDizisi[i]);
	}
	
	enBuyuk=sayiDizisi[0];
	enKucuk=sayiDizisi[0];
	
	for(i=0;i<10;i++){
		if(sayiDizisi[i]>enBuyuk){
			enBuyuk=sayiDizisi[i];
		}
    	if(sayiDizisi[i]<enKucuk){
			enKucuk=sayiDizisi[i];
		}
		toplam+=sayiDizisi[i	];
		printf("%d.eleman eklendi ve yeni toplam:%d\n",i+1,toplam);
	}
	ortalama=toplam/10;
	printf("Dizinin ortalamasi:%d\n",ortalama);
	printf("Dizinin en buyuk elemani:%d\n",enBuyuk);
	printf("Dizinin en kucuk elemani:%d\n",enKucuk);
	
	for(i=0;i<10;i++){
		if(sayiDizisi[i]>=ortalama){
			printf("%d sayisi dizinin ortalamasindan buyuk esittir\n",sayiDizisi[i]);
		}
		else{
			printf("%d sayisi dizinin ortalamasindan kucuktur\n",sayiDizisi[i]);
		}
	}
	
	for(i=0;i<10;i++){
		if(sayiDizisi[i]%kullaniciGirisi==0){
			printf("%d sayisi kullanicinin girdigi sayinin bir katidir\n",sayiDizisi[i]);
		}
	}
	/* END 2 */
	
	return 0;
}