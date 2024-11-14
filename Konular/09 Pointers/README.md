# İşaretçiler

- Detaylı bilgi için [makaleden](https://www.bilgigunlugum.net/prog/cprog/c_isaretci) yararlanabilriz.

## [Isaretcilerin Mantigi ve Kullanimi](09_pointers_teori1.c)

• Isaretciler, bir **degiskenin adresini tutmak** icin olusturulmus ozel veri tipleridir. <br>
• Onceki uygulamalarda atadigimiz degisken yolu **direkt erisim** olarak geciyor. <br> 
• Isaretcide ise yaptigimiz islem **dolayli erisim**dir yani adres ile ulasiyoruz. <br>
• Pointer, ilk tanimlanirken oncesinde '*' isareti kullaniyoruz. 
• Atama yaparken '&' isareti **adres** anlamina gelir. <br>	
```c
    int sayi = 5;       //Direkt erişim
    int *ptr = &sayi;   //Dolaylı erişim
```
• İsaretci tanımlarken bir deger ataması yapılmaz ise rasgele deger alabilir. 
Bunu önlemek için 0 veya NULL değeri ilk değer olarak verilir.
• Ilk tanımlama sonrası '*' isareti tekrar kullandığımızda **değeri** anlamına geliyor. <br>
```c
	int *p2 = NULL;   //Tanımlama
	p2 = &sayi;       //Atama
	printf("Pointer kullanarak sayi degiskenin adresi:  %#X \n"  , p2);
	printf("Pointer kullanmadan sayi degiskenin adresi: %#X \n"  , &sayi);
	printf("Pointer kullanarak sayi degiskenin degeri:  %d  \n"  , *p2);
	printf("Pointer kullanmadan sayi degiskenin degeri: %d  \n\n", sayi);
```
```
	Pointer kullanarak sayi degiskenin adresi: 0X61FDF4 
	Pointer kullanmadan sayi degiskenin adresi: 0X61FDF4 
	Pointer kullanarak sayi degiskenin degeri: 5 
	Pointer kullanmadan sayi degiskenin degeri: 5 
```

• p4 işaretine 8 atayarak tuttuğu adresindeki degere de 8 atamis oldum. Boylece o adresteki 5 olan deger 8 olarak degismis oldu.
Biz o tuttuğu adrese gidip deger degistirmis oluyoruz. <br>
• Işaretçilerin mantığını daha iyi anlamak için [linkteki](https://youtu.be/Jna11ypDYLo?si=i1OqCFbR9XNyFQ8E) videoyu izleyebiliriz.

```c
	int *p3,*p4;
	p3 = &sayi;
	p4 = &sayi;	
	*p4 = 8;
	printf("Pointer kullanarak sayi degiskenin adresi:  %#X \n", p3);
	printf("Pointer kullanmadan sayi degiskenin adresi: %#X \n", &sayi);
	printf("Pointer kullanarak sayi degiskenin degeri:  %d  \n", *p4);
	printf("Pointer kullanmadan sayi degiskenin degeri: %d  \n", sayi);
```
```
	Pointer kullanarak sayi degiskenin adresi: 0X61FDF4 
	Pointer kullanmadan sayi degiskenin adresi: 0X61FDF4 
	Pointer kullanarak sayi degiskenin degeri: 8 
	Pointer kullanmadan sayi degiskenin degeri: 8 
```

<br>

## [Isaretcilerin Dizilerle Birlikte Kullanimi](09_pointers_teori2.c)

• Pointer, kullanacagim dizi ile ayni tipte olmasi gerekiyor. <br>
• Dizilerin belirli baslangic adresleri ve sirali sekilde ilerleyen yapisi vardir. <br> 
Dizimi yonetmek istiyorsam dizinin baslangic adresini pointer'a atarim ve buradan ilerleyerek dizinin tum elemanlarina erisirim.
• Baslangic adresinden 4 byte ilerleyerek erisim saglayabiliriz. <br>
• Baslangic adresini iki sekilde atayabiliriz. <br>
Dizinin ilk elamani olan 0.indisi yazariz veya dizinin ismini yazarak baslangic adresini atamis oluruz.

```c
	int dizi[10]={1,2};

	int *ptr=&dizi[0];     //Adres için dizinin ilk elemanı atama
	int *ptr2=dizi;        //Adres için dizinin ismi atama

	printf("Dizinin baslangic adresi: %#X\n"  , ptr);
	printf("Dizinin baslangic adresi: %#X\n\n", ptr2);
```
```
	Dizinin baslangic adresi:0X61FDD0
	Dizinin baslangic adresi:0X61FDD0
```

• ptr+i ile dizinin elamanlarina sirasiyla ulasiyoruz. <br> 
ptr+0=dizi[0], ptr+1=dizi[1], ...
• Her bir adres arasindaki fark 4'tur. <br>
• Deger atamak istedigimizde '*' isaretini kullaniyorduk. <br>
```c
	int i;
	srand(time(NULL));

	int *ptr;

	for(i = 0; i < 10; i++){
		printf("Dizinin %d.indeksinin adresi:%#X ", i, ptr+i);

		*(ptr+i)=rand()%100;
		printf("ve degeri:%d\n",*(ptr+i));
	}
```
```
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
```

• Burada ptr guncelleyerek yani adresini arttirarak dizinin elemanlarina ulasacagiz. <br>
• Yukardaki for dongusunun ciktisi ile ayni sonucu veriyor. <br>
• Yukardakinde ptr yerinden oynamazken, burada ptr adres arttırmasıyla hep ileri gitti. <br>
```c
	int i;
	srand(time(NULL));

	int dizi1[10];

	for(i = 0; i < 10; i++){
		dizi1[i] = rand()%100;	
	}

	int *ptr;

	printf("\n");
	for(ptr = dizi1; ptr!= dizi1+10; ptr++){
		printf("Adres: %#X ve deger: %d\n", ptr, *ptr);
	}
```
```
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
```

• Pointer aritmatigini inceleyecegiz. 

• printf("%d\n", (*p)++);: İlk olarak, *p ile işaretçinin gösterdiği değer (dizinin ilk elemanı) ekrana yazdırılır. Ardından, (*p)++ ifadesi kullanılarak bu değer arttırılır. Bu nedenle, ekrana yazdırılan değer 1 olur, ancak dizi[0] artık 2 olur. <br>
• printf("%d\n", *(p++));: İlk olarak, *(p++) ifadesi kullanılarak p işaretçisinin gösterdiği değer ekrana yazdırılır. Daha sonra, p++ ifadesi kullanılarak işaretçi bir sonraki indekse geçirilir (dizinin ikinci elemanına). Bu nedenle, ekrana yazdırılan değer 2 olur. <br> 
• printf("%d\n", *(++p));: İlk olarak, ++p ifadesi kullanılarak p işaretçisi bir sonraki indekse geçirilir (dizinin üçüncü elemanına). Daha sonra, *(++p) ifadesi ile bu yeni indeksteki değer ekrana yazdırılır. Bu durumda, dizinin üçüncü elemanı başlangıçta 0 olarak tanımlandığından ekrana yazdırılan değer 0 olacaktır. <br> 
• printf("%d\n", ++(*p));: İlk olarak, *p ifadesi ile işaretçinin gösterdiği değer (dizinin üçüncü elemanı) alınır. Daha sonra, ++(*p) ifadesi kullanılarak bu değer arttırılır ve sonuç ekrana yazdırılır. Bu durumda, ekrana yazdırılan değer 1 olacaktır. 
```c
	int dizi[10]={1,2};

	int *p=dizi;

	printf("\n%d\n", (*p)++);   //Dizinin 1.elamanini yazdir, sonra o degeri arttir 
	printf("%d\n"  , *(p++));   //Once yazdir, sonra pointer bir sonraki indekse gecsin	
	printf("%d\n"  , *(++p));   //Once adresi arttir (pointer bir sonraki indekse gecsin), sonra yazdir
	printf("%d\n"  , ++(*p));   //Pointer nereyi gosteriyorsa, degerini arttir sonra da yazdir
```
```
	1
	2
	0
	1
```

<br>

## [Isaretcilerin Fonksiyonlarla Birlikte Kullanimi](09_pointers_teori4.c)

• Degerle degistirme yaptigimizda o fonksiyonun icindekini degistirirken, değişkenlerin değerini değiştirmiyor. 
• Adres ile degistirme yaparken fonksiyonun icindekini degistirirken aynı zamanda değişkenlerin değerini de degistiriyor.
```c
#include <stdio.h>

void sayiDegistir(int,int);
void sayiDegistirPointer(int *,int *);

int main(int argc, char *argv[]) {
	
	int a=5,b=12;
	printf("A sayisinin degeri :%d, B sayisinin degeri :%d\n\n",a,b);

	sayiDegistir(a,b);                  //değerleriyle gönderiyorum
	printf("A sayisinin degeri :%d, B sayisinin degeri :%d\n\n",a,b);

	sayiDegistirPointer(&a,&b);         //adresleriyle gönderiyorum
	printf("A sayisinin degeri :%d, B sayisinin degeri :%d\n",a,b);

	return 0;
}

void sayiDegistir(int fonkA, int fonkB){             //fonkA=a, fonkB=b
	int geciciSayi;
	geciciSayi = fonkB;  //b degeri kaybolmasin
	fonkB = fonkA;
	fonkA=geciciSayi;
	printf("Fonksiyon icinde A'nin degeri :%d, Fonksiyon icinde B'nin degeri:%d\n",fonkA,fonkB);
}

void sayiDegistirPointer(int *fonkA, int *fonkB){   //fonkA=&a, fonkB=&b
	int geciciSayi;
	geciciSayi = *fonkB;
	*fonkB = *fonkA;
	*fonkA = geciciSayi;
	printf("Fonksiyon icinde A'nin degeri :%d, Fonksiyon icinde B'nin degeri:%d\n",*fonkA,*fonkB);
}
```
```
	A sayisinin degeri :5, B sayisinin degeri :12

	Fonksiyon icinde A'nin degeri :12, Fonksiyon icinde B'nin degeri:5
	A sayisinin degeri :5, B sayisinin degeri :12

	Fonksiyon icinde A'nin degeri :12, Fonksiyon icinde B'nin degeri:5
	A sayisinin degeri :12, B sayisinin degeri :5
```

<br>

## [Isaretcilerin Karakter Dizileriyle Birlikte Kullanimi](09_pointers_teori4.c)

• Donguden sonra ciktiginda yazdirdigi adreste tutulan deger bos gibi gozukuyor fakat "\0" null karakteri tutuyor.
```c
	char* kullaniciGirisi = "Cengiz Topcu";    //char kullaniciGirisi[] = "Cengiz Topcu";
	
	while(*kullaniciGirisi != '\0'){
		printf("%#X adresinde tutulan deger: %c\n", kullaniciGirisi, *kullaniciGirisi);
		kullaniciGirisi++;
	}
	printf("%#X adresinde tutulan deger: %c\n", kullaniciGirisi, *kullaniciGirisi);
```
```
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
```

```c
	char* ptr;
	ptr = kullaniciGirisi;

	printf("\nAdresi: %#X\n\n", ptr);
```
```
	Adresi: 0X40400C	
```

```c
	char* kullanicilar[] = {"Cengiz Topcu", "Duygu Keydal", "Eda Deniz", "Burak Kilic", "Omer Selvi"};

	for (int i = 0; i < 5; i++){
		printf("%s\n", kullanicilar[i]) ;
	}
```
```
	Cengiz Topcu
	Duygu Keydal
	Eda Deniz
	Burak Kilic
	Omer Selvi
```

<br>

## [Fonksiyon Isaretcileri](09_pointers_teori5.c)

• Fonksiyon isartetcisi olusturduk. Ardindan tutacak adresi yazdik. 

```c
	#include <stdio.h>

	void MerhabaDunya(int a){
	printf("Merhaba Dunya\n");
	printf("%d\n",a);
	}

	int main(int argc, char *argv[]) {

		void(*fonkPtr)(int); 
		fonkPtr=MerhabaDunya;    //MerhabaDunya();
		(*fonkPtr)(5);

		return 0;
	}
```
```
	Merhaba Dunya
	5
```

```c
	#include <stdio.h>

	void sonuchesapla(int a,int b){
		printf("\nSonuc:%d\n",a*2+b*3);
	}

	void sonuchesapla2(int a,int b){
		printf("Sonuc:%d\n",(a+2)*(b-5));
	}

	void sonuchesapla3(int a,int b){
		printf("Sonuc:%d",a*3+b*2);
	}

	int main(int argc, char *argv[]) {

		void(*fP[3])(int,int);    //Uc tane fonksiyon tutacagini belirttik
		fP[0]=sonuchesapla;
		fP[1]=sonuchesapla2;
		fP[2]=sonuchesapla3;
		(*fP[0])(5,3);
		(*fP[1])(3,8);
		(*fP[2])(8,1);

		return 0;
	}
```
```
	Sonuc:19
	Sonuc:15
	Sonuc:26
```

```c
	#include <stdio.h>

	int sonuc(int a,int b){
		printf("\nSonuc:%d",a*3+b*2);
	}

	int hesapla(int (*ptr)(int,int),int a,int b){     //fonksiyon içinde fonksiyon yazdik
		ptr(a,b);
	}

	int main(int argc, char *argv[]) {

		hesapla(sonuc,3,5);

	return 0;
	}
```
```
	Sonuc:19
```