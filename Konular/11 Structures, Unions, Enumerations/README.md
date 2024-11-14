# Yapılar, Ortaklıklar ve Numaralandırmalar

> ## **Struct**

Detaylı bilgi için [makaleden](https://www.bilgigunlugum.net/prog/cprog/c_yapi) yararlanabilriz. <br>

## [Giris](11_structures_unions_enumerations_teori1.c)

• Once struct kullanarak **veri tipini** tanimladim. 
Daha sonra veri tipine ogr1 **degisken** ismi tanimladim. <br>
struct ogrenci veri tipimiz, ogr1 degisken ismi'dir. 
Ornek verirsek int x; icin int veri tipimizken x degisken ismiydi. <br>
• **Char degiskenine** sonradan atama yapacaksak **"strcpy"** kullanmamiz gerekiyor 
cunku char degiskenine esitlikle atama yapilamaz. <br>
• Tanimalama yaptigimizda bellekte alan ayrılmıyor.	
```c
#include <stdio.h>
#include <string.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	//sirasiyla deger verdik          
	struct Ogrenci ogr={.isim="Cengiz",.soyisim="Topcu",.ortalama=3.19};
    struct Ogrenci ogr1={"Cengiz","Topcu",3.19};    	    

	//atama ile degere verdik
    struct Ogrenci ogr2;
    strcpy(ogr2.isim,"Duygu");                  	
    strcpy(ogr2.soyisim,"Seker");
    ogr2.ortalama=2.78;
    
    printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",ogr1.isim,ogr1.soyisim,ogr1.ortalama);
    printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",ogr2.isim,ogr2.soyisim,ogr2.ortalama);

	return 0;
}
```
```
Cengiz Topcu adli ogrencinin mezuniyet ortalamasi 3.19'dur.
Duygu Seker adli ogrencinin mezuniyet ortalamasi 2.78'dur.
```

<br>

## [Dizilerle Birlikte Kullanımı](11_structures_unions_enumerations_teori2.c)

• Dizilerde tanimlama yaptigimizda eleman sayisini yazmamiza gerek yok. 
Tanimlama yapmaz isek eleman sayisini yazmamiz gerekir.

```c
#include <stdio.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	struct Ogrenci ogrenciler[]={{"Cengiz","Topcu",3.19},{"Duygu","Kilic",2.48},{"Ahmet","Osman",2.90}};

	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",ogrenciler[0].isim,ogrenciler[0].soyisim,ogrenciler[0].ortalama);
	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",ogrenciler[1].isim,ogrenciler[1].soyisim,ogrenciler[1].ortalama);
	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",ogrenciler[2].isim,ogrenciler[2].soyisim,ogrenciler[2].ortalama);

	return 0;
}
```
```
Cengiz Topcu adli ogrencinin mezuniyet ortalamasi 3.19'dur.
Duygu Kilic adli ogrencinin mezuniyet ortalamasi 2.48'dur.
Ahmet Osman adli ogrencinin mezuniyet ortalamasi 2.90'dur.
```

<br>

```c
#include <stdio.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	struct Ogrenci ogrenciler1[3];

	int i;

	for (i = 0; i < 3; i++){
		puts("Lutfen ogrencinin adini giriniz:");
		scanf("%s",&ogrenciler1[i].isim);

		puts("Lutfen ogrencinin soyadini giriniz:");
		scanf("%s",&ogrenciler1[i].soyisim);
		
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f",&ogrenciler1[i].ortalama);
	}
	for (i = 0; i < 3; i++){
		printf("%d. %s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",i+1,ogrenciler1[i].isim,ogrenciler1[i].soyisim,ogrenciler1[i].ortalama);
	}

	return 0;
}
```
```
1. Mehmet Kara adli ogrencinin mezuniyet ortalamasi 2.56'dur.
2. Sevgi Isık adli ogrencinin mezuniyet ortalamasi 2.98'dur.
3. Cihan Demir adli ogrencinin mezuniyet ortalamasi 3.45'dur.
```

<br>

## [Isaretcilerle Birlikte Kullanımı](11_structures_unions_enumerations_teori3.c)

• ogrPtr, ogr'nin adresini tutuyor.
```c
#include <stdio.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	struct Ogrenci ogr={"Cengiz","Topcu",3.19};   //degisken tanimlamasi
	
	struct Ogrenci *ogrPtr;                       //isaretci degiskeni tanimlamasi
	ogrPtr=&ogr;    

	printf("Adresi:%#X\n",ogrPtr);
	printf("%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",(*ogrPtr).isim,(*ogrPtr).soyisim,(*ogrPtr).ortalama);

	return 0;
}
```
```
Adresi:0X61FDE0
Cengiz Topcu adli ogrencinin mezuniyet ortalamasi 3.19'dur.
```

<br>

```c
#include <stdio.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	struct Ogrenci ogr1={"Cengiz","Topcu",3.19}; 
	     
	struct Ogrenci *ogrPtr1;   
	ogrPtr1=&ogr1;    

	strcpy((*ogrPtr1).isim,"Duygu");
	strcpy((*ogrPtr1).soyisim,"Seker");
	(*ogrPtr1).ortalama=2.78;

	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",(*ogrPtr1).isim,(*ogrPtr1).soyisim,(*ogrPtr1).ortalama);

	return 0;
}
```
```
Duygu Seker adli ogrencinin mezuniyet ortalamasi 2.78'dur.
```

<br>

• (*ogrPtr2). yazmak yerine ogrPtr2-> seklinde yazabiliriz
• ogrPtr2 ile deger yazdirdiktan sonra ogrPtr3 ile de deger yazarsak biz çikti olarak ogrPtr3'un degerlerini verir.
Cunku ayni adresi isaret ettiklerinden aslinda adresteki degerleri degistiriyoruz.
```c
#include <stdio.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

int main(int argc, char *argv[]) {

	struct Ogrenci ogr2={"Cengiz","Topcu",3.19};     
	 
	struct Ogrenci *ogrPtr2;   
	struct Ogrenci *ogrPtr3; 
	ogrPtr2=&ogr2;   
	ogrPtr3=&ogr2;  

	strcpy(ogrPtr2->isim,"Ahmet");
	strcpy(ogrPtr2->soyisim,"Sever");
	ogrPtr2->ortalama=2.99;
	
	strcpy(ogrPtr3->isim,"Melek");
	strcpy(ogrPtr3->soyisim,"Altin");
	ogrPtr3->ortalama=3.53;

	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n",ogrPtr2->isim,ogrPtr2->soyisim,ogrPtr2->ortalama);

	return 0;
}
```
```
Melek Altin adli ogrencinin mezuniyet ortalamasi 3.53'dur.
```

<br>

## [Fonksiyonlarla Birlikte Kullanımı](11_structures_unions_enumerations_teori5.c)

```c
#include <stdio.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};

void bilgileriOku(struct Ogrenci *ogrPtr);
void bilgileriYazdir(struct Ogrenci *ogrPtr);

int main(int argc, char *argv[]) {

	struct Ogrenci ogr;

	bilgileriOku(&ogr);
	bilgileriYazdir(&ogr);

	return 0;
}

void bilgileriOku(struct Ogrenci *ogrPtr)
{
		puts("Lutfen ogrencinin adini giriniz:");
		scanf("%s", &ogrPtr->isim, "Ahmet");
		puts("Lutfen ogrencinin soyadini giriniz:");
		scanf("%s" ,&ogrPtr->soyisim);
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f", &ogrPtr->ortalama);
}

void bilgileriYazdir(struct Ogrenci *ogrPtr)
{
	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", &ogrPtr->isim, &ogrPtr->soyisim, &ogrPtr->ortalama);
}
```
```
Lutfen ogrencinin adini giriniz:
Yeliz
Lutfen ogrencinin soyadini giriniz:
Ay
Lutfen ogrencinin ortalamasini giriniz:
62

Yeliz Ay adli ogrencinin mezuniyet ortalamasi 62.00'dur.
```

<br>

## [Typedef Kullanımı](11_structures_unions_enumerations_teori6.c)

• Boylece tanımlama yaparken struct kelimesini kullanmamiza gerek kalmadi.
• Yukarida 3 sekilde gosterimi yapilmistir.
• Mevcut veri türlerine yeni bir isim (alias) tanımlamak için kullanılır.
Bu özellik, kodun okunabilirliğini artırabilir ve bazı karmaşık veri yapılarının daha anlaşılır hale gelmesine yardımcı olur. 
• Özellikle yapılar (structs), birlikler (unions) ve işaretçiler (pointers)için yeni tür isimleri tanımlamakta sıkça kullanılır.

```c
#include <stdio.h>

typedef struct{
	char isim[20];
	char soyisim[20];
	float ortalama;
}Ogrenci;

void bilgileriOku(Ogrenci *ogrPtr);
void bilgileriYazdir(Ogrenci *ogrPtr);

int main(int argc, char *argv[]) {

	Ogrenci ogr;

	bilgileriOku(&ogr);
	bilgileriYazdir(&ogr);

	return 0;
}

void bilgileriOku(Ogrenci *ogrPtr)
{
		puts("Lutfen ogrencinin adini giriniz:");
		scanf("%s", &ogrPtr->isim, "Ahmet");
		puts("Lutfen ogrencinin soyadini giriniz:");
		scanf("%s" ,&ogrPtr->soyisim);
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f", &ogrPtr->ortalama);
}

void bilgileriYazdir(Ogrenci *ogrPtr)
{
	printf("\n%s %s adli ogrencinin mezuniyet ortalamasi %.2f'dur.\n", &ogrPtr->isim, &ogrPtr->soyisim, &ogrPtr->ortalama);
}
```
```
Lutfen ogrencinin adini giriniz:
Yeliz
Lutfen ogrencinin soyadini giriniz:
Ay
Lutfen ogrencinin ortalamasini giriniz:
62

Yeliz Ay adli ogrencinin mezuniyet ortalamasi 62.00'dur.
```

<br>

## [Enum](11_structures_unions_enumerations_teori7.c)

• haftaninGunleri veri tipi, gunler degiskendir
• Enum yapisinda gunlere dege vermez isek otomaik sifirdan baslar ama ornegin prs=15 ise cuma degeri 16, cmt degeri 17 seklinde olur

```c
#include <stdio.h>

typedef enum {
	pzt=1,
	sali,
	crs,
	prs,
	cuma,
	cmt,
	pzr
}haftaninGunleri;

int main(int argc, char *argv[]) {

	haftaninGunleri gunler;  

	puts("Lutfen haftanin gunlerine karsilik 1-7 arasi bir sayi giriniz:");
	scanf("%d", &gunler);

	switch (gunler)
	{
	case pzt:
	case sali:
	case crs:
	case prs:
	case cuma:
		printf("Haftaici\n");
		break;
	case cmt:
	case pzr:
		printf("Haftasonu\n");
		break;
	default:
		printf("Hatali tuslama yaptiniz\n");
	}

	return 0;
}
```
```
Lutfen haftanin gunlerine karsilik 1-7 arasi bir sayi giriniz:
4
Haftaici
```

<br>


```c
#include <stdio.h>

typedef enum {
	acemi=1, ortaseviye=2, ileriseviye=3, prof=4
}oyunSeviyeleri;

int main(int argc, char *argv[]) {

	oyunSeviyeleri seviyeler;  

	puts("Lutfen oyundaki level karsiligini giriniz:");
	scanf("%d", &seviyeler);

	if (seviyeler == acemi){
		printf("Bu gorevi almaya yetkiniz yoktur\n");
	}
	else if (seviyeler == ortaseviye || seviyeler == ileriseviye){
		printf("Bu gorevi alabilirsiniz\n");
	}
	else if (seviyeler == prof){
		printf("Bu gorevi almak icin seviyeniz cok yuksek\n");
	}
	else{
		printf("Hatali level girisi\n");
	}

	return 0;
}
```
```
Lutfen oyundaki level karsiligini giriniz:
2
Bu gorevi alabilirsiniz
```

<br>

## [Union](11_structures_unions_enumerations_teori8.c)

• struct konusuna benziyor ama ufak farkliliklari var
• Aynı bellek bölgesini paylaşan değişkenlerden sadece bir tanesi aynı anda bellek bölgesini kullanabilir
• Union, tüm elemanların aynı hafıza alanını paylaşmasına izin verir, böylece boyutu içindeki en büyük veri tipinin boyutu kadar olur. 
• Her bir union kullanımı, aynı bellek alanına farklı türde verilerin yazılması nedeniyle birbirlerini nasıl etkileyebileceğini göstermektedir. 
Bu yapıların dikkatli kullanılması gerekir, özellikle de birden fazla üye arasında geçiş yaparken.

```c
#include <stdio.h>

typedef union{
	int intSayi;
	float floatSayi;
	double doubleSayi;	
}Sayi;

int main(int argc, char *argv[]) {

	Sayi sayi;      
	printf("%d\n",sizeof(sayi));

	sayi.intSayi = 12;
	printf("%d\n",sayi.intSayi);
	printf("%f\n",sayi.floatSayi);
	printf("%f\n\n",sayi.doubleSayi);

	sayi.floatSayi = 3.85;
	printf("%d\n",sayi.intSayi);
	printf("%f\n",sayi.floatSayi);
	printf("%f\n\n",sayi.doubleSayi);

	sayi.doubleSayi = 5.89;
	printf("%d\n",sayi.intSayi);
	printf("%f\n",sayi.floatSayi);
	printf("%f\n",sayi.doubleSayi);

	return 0;
}
```
```
8 

12
0.000000
0.000000

1081501286
3.850000
0.000000

687194767
0.000000
5.890000
```