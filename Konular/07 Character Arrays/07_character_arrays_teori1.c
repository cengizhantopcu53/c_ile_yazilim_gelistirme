#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	/* karakter dizisi tanımlama -------------------------------- */
	/*
	* Char değişkeni kullandığımızdan her biri karakter 1 byte olmak üzere toplamda 20 byte yer kapladı.
	*/
	/* BEGIN 0 */
	char ad[20];
	printf("Dizinin kapladigi alan: %d byte\n",sizeof(ad));
	/* END 0 */	


	/*	
	* Yazdığımız ifade string'dir. 't', 'o' ,'p' ,'c' ,'u', '\0' olarak karakterlere ayırır. 
	En sondaki null karakteri bittiğini ifade eder. 
	* Böylece 6 byte kullanmış olduk. Aslında 20 byte kullanıyoruz fakat 6 byte kısmı doldurduk.
	Bu yazdıklarımız string ifade olduğu için karakter dizilerinde tutuyoruz. 
	Yazdırmak için %s kullanırız. Yazdırırken null ifadesini yazdırmaz
	*/
	/* BEGIN 1 */
	char aisim[20]="topcu";
	printf("%s",aisim);
	/* END 1 */	


	/*
	* Çift tırnak şeklinde atama yaptığımızda null karakterini kendi eklerken, 
	süslü parantez işinde karakterleri tek tırnak içerisinde yazarken null karakterini kendimiz eklememiz gerekiyor.
	* Direk atama işlemi yapıyorsak karakter sayısını girmemize gerek yok.
	*/
	/* BEGIN 2 */
	char bisim[20]={'t','o','p','c','u','\0'};
	printf("%s\n",bisim);
	/* END 2 */	

	/*
	* Kullanıcıdan string alma işlemi yaparken '&' işaretini kullanmamıza gerek yok.
	*/
	/* BEGIN 3 */
	char cisim[20];
	scanf("%s",cisim);
	printf("%s",cisim);
	/* END 3 */	

	
	/*
	Pointer ile de atama yapılabilir.
	*/
	/* BEGIN 4 */
	char *disim="topcu";
	/* END 4 */	
	

	/*
	* Birden fazla kelimeyi tutmak için iki boyutlu dizi kullanıyoruz.
	İki boyutlu dizide ilk kısma maksimum kelime sayısı, ikinci kısma maksimum harf sayısı yazıyoruz.
	* Eğer biz yanda kelimeleri yazıyorsak ilk kısmı yazmamıza gerek yok fakat ikinci kısma maksimum harf sayısını yazmamız gerekiyor.
	* Önceki örneklerde dizi için 20 yazmıştık. Eğer yazmasak ve boş bıraksaydık program otomatik kendisi 6 yazacaktı.
	*/
	/* BEGIN 5 */
	char eisim[][10]={"Cengiz","Ayhan","Mesut","Mete","Kadir"};
	char esoyisim[][10]={"Topcu","Morgil","Yilmaz","Karakaya","Caliskan"};
	
	int i;
	for(i=0;i<5;i++){
		printf("Ogrencinin Adi Soyadi: %s %s\n",eisim[i],esoyisim[i]);
	}
	/* END 5 */	


	/*
	* İsimlerin sadece ilk harfini yazdırmak istersek %s yerine %c kullanırız ve isim değişkenine [0] ekleriz. 
	* [k] ifadesi dizideki harf kısmını temsil ederken [0] ise harfi temsil eder.
	String ifade yazdırırken s, char ifade yazdırırken c kullanırız
	*/
	/* BEGIN 6 */
	char fisim[][10]={"Cengiz","Ayhan","Mesut","Mete","Kadir"};
	char fsoyisim[][10]={"Topcu","Morgil","Yilmaz","Karakaya","Caliskan"};
	
	int k;
	for(k=0;k<5;k++){
		printf("Ogrencinin Adi Soyadi: %c.%s\n",fisim[k][0],fsoyisim[k]);
	}
	/* END 6 */	
	
    
    /*
    *Kullanıcıdan isim soyisim alarak yazdırmayı deneyelim.
    */
	/* BEGIN 7 */	
	char gisim[2][10];
	char gsoyisim[2][10];
	
	int x;
	for(x=0;x<2;x++){
		printf("\nLutfen %d.ogrencinin adini soyadini giriniz: ",x+1);
		scanf("%s %s",gisim[x],gsoyisim[x]);
	}
	for(x=0;x<2;x++){
		printf("%d.Ogrencinin Adi Soyadi: %s %s\n",x+1,gisim[x],gsoyisim[x]);
	}
	/* END 7 */	
	
	return 0;
}
