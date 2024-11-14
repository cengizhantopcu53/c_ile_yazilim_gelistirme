#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	/*
	* Döngüler , belirli bir koşul sağlandığı sürece sürekli bir şekilde kendini tekrar eden yapılar.
	* For döngüsünün içine sırasıyla şunlar yazılır. 
	Birincisi döngüye ilk girdiğinde yapılacak işlem, ikincisi döngü şartımız ve sonuncusu her döngünün sonunda yapılacak işlem
	*/
	/* BEGIN 0 */
	int k;
	for(k=0;k<10;k++){
		printf("k sayisi:%d\n",k);
	}
	/* END 0 */
	

	/*
	* İç içe yazdığımızda 1.satır çalışıyor ve i=0 yapıyor ardından 2.satır çalışıyor ve j değişkeni 
	9 olana kadar Merhaba yazdırıyor ardından 6.satıra geçiyor. 
	Tekrar başa gelip i değişkeni 1 arttırıp 2.satırdaki j değişkeni 9 olana kadar Merhaba yazdırıyor. 
	Bu şekilde 1.satır 9 olana kadar devam ediyor. Böylece 100 tane Merhaba yazdırmış oluyor.
	* 2.satırda döngü şartını i değişkenine bağlı yaparsak ilk okumada döngü şartı sağlanmadığından Merhaba yazdırmayacak. 
	*/
	/* BEGIN 1 */
	int m,n;
	for(m=0;m<10;m++){ 
		for(n=0;n<m;n++){
			printf("Merhaba ");
		}
		printf("\n"); 
   	}
   	/* END 1 */
   
   
	/*
	* 4.satırda i=2 ve döngü şartını sağlıyor böylece alt satıra geçip 5.satırda faktöriyel 
	sonucu 1 çarpı 2'den 2 oluyor. Böylece yeni faktöriyel değeri 2 oluyor. 
	Ardından i=3 oluyor faktöriyel değeri 2 çarpı 3'den 6 oluyor. 
	Bu şekilde kullanıcıdan aldığımız değer kadar i sayısını arttırıp devam ediyoruz.
	*/
	/* BEGIN 2 */
	int a,sayi,faktoriyel=1;
	printf("Lutfen faktoriyeli hesaplanacak sayiyi giriniz:");
	scanf("%d",&sayi);
	for(a=2;a<=sayi;a++){ 
			faktoriyel*=a;
	}
	printf("%d!=%d\n",sayi,faktoriyel);   
	/* END 2 */
   

    /* BEGIN 3 */	
	int x,y;
	for(x=2;x<=10;x++){
			for(y=1;y<10;y++){
				int sonuc=pow(x,y);
				printf("%d ",sonuc);
			}
			printf("\n"); 
	}
	/* END 3 */
   
	return 0;
}
