#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	/* 
	* if-else yapisinda if blogu 1 oldugunda if yapsini calistirir, 0 oldugunda else yapisini calistirir. 
	Eger 192 yazarsak yine if yapisini calistirir cunku 0 disindakileri dogru kabul eder.
	*/
	/* BEGIN 0 */
	if(0)
	{
		printf("if bloguna girdi\n");
	}
	else if(0)
	{
		printf("else if bloguna girdi\n");
	}
	else
	{
		printf("else bloguna girdi\n");
	}
    /* END 0 */


    /*
	* stdlib.h kutuphanesinden  srand ve random komutunu kullanmak icin ekliyoruz.
	* 100+1 islemi 1 ile 101 arasinda deger atamasi yapar. +5 yaparsak 5 ile 105 arasinda değer atamasi yapar.
	* 1 ile 101 arasinda bir deger atiyor fakat her yeniledigimizde ayni sayi cikiyor. 
	Bu sebeple her seferinde farkli degerler uretmesi srand komutunu kullaniyoruz.
	time icin time.h kutuphanesini de ekliyoruz.
    */
	/* BEGIN 1 */
	int sayi1,sayi2;
	srand(time(NULL));  
	sayi1=rand()%100+1; 
	sayi2=rand()%100+1;
	printf("\nbirinci sayi:%d , ikinci sayi:%d\n",sayi1,sayi2);
	
	if(sayi1<sayi2)
	{
		printf("Sonuc:%d degeri %d degerinden kucuktur\n",sayi1,sayi2);
	}
	else if(sayi1==sayi2)
	{
		printf("Sonuc:%d degeri %d degerine esittir\n",sayi1,sayi2);
	}
	else
	{
		printf("Sonuc: %d degeri %d degerinden buyuktur\n",sayi1,sayi2);
	}
    /* END 1 */


	/* BEGIN 2 */
	int sayi;
	srand(time(NULL));    
	sayi=rand()%1000;
	printf("\nOlusturulan sayi %d\n",sayi);
	
	if(sayi%2==0)
	{
		printf("%d cifttir",sayi);
	}
	else
	{
		printf("%d tektir",sayi);
	}
    /* END 2 */


    /*
	* Scanf ile onceden kullanicidan deger aldigimdan sonraki scanf komutunu atliyor. 
	Bu sebeple kullanicidan ch karakterini almadan once, fflush(stdin) komutu ekliyorum. 
	Bunu bufferi temizlemek icin yapiyorum. 
    */
	/* BEGIN 3 */
	int sayi3, sayi4; 
	float sonuc;
	char ch;
	
	printf("\nLutfen sirasiyla iki adet sayi giriniz:");
	scanf("%d%d",&sayi3,&sayi4);
	printf("Lutfen yapmak istediginiz islemi giriniz(+,-,*,/):");
	fflush(stdin);  //buffer temizleniyor 
	scanf("%c",&ch);
	
	if(ch=='+'){
		sonuc=sayi3+sayi4;
		printf("Toplama sonucu:%.2f\n",sonuc);
	}
	else if(ch=='-'){
		sonuc=sayi3-sayi4;
		printf("Cikarma sonucu:%.2f\n",sonuc);
	}
	else if(ch=='*'){
		sonuc=sayi3*sayi4;
		printf("Carpma sonucu:%.2f\n",sonuc);
	}
	else if(ch=='/'){
		sonuc=sayi3*sayi4;
		printf("Bolme sonucu:%.2f\n",sonuc);
    }
    else{
    	printf("Yanlis tuslama yaptiniz\n");
	}
    /* END 3 */
	
	return 0;
}


