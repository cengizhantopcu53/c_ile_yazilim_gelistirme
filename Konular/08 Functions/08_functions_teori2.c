#include <stdio.h>
#include <stdlib.h>

/*	
Fonksiyon icerisinde tanimladigimiz degisken local oldugundan main icerisinde boyle bir degisken tanimlanmamistir 
hatasi verir cunku sadece o fonksiyonda tanimlidir.
Ayni sekilde main icerisine tanimladigimiz degisken local degisken oldugundan fonksiyon altinda da calismaz.
if blogu icerisinde tanimlanan degisken local degiskendir.
*/
	
//int toplam(int,int);

int a=5;   //Global Degisken

int main(int argc, char *argv[]) {
	
	//int a;
	//printf("%d\n",sonuc);s
		
	if(1){
		int a;  //Lokal Degisken
		printf("if blogu icerisine atanan deger: %d\n",a);
			
	}	
	printf("Global atanan deger: %d\n",a);
		
	return 0;
}

/*
int toplam(int sayi1, int sayi2){
//sonuc=sayi1+sayi
//return sonuc;
printf("%d",a);
}
*/



