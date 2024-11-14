#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

	/* Taksit/indirim Hesaplama Programi ---------------------------*/
	/*
	* Bir fiyat hesaplama programi yaptiginizi dusunun, kullanicidan taksit isteyip istemedigini(buna gore belirli ek ucretler alinacak),
	ozel kartinin olup olmadigini(fiyat kesintisi yapilacak) sorarak bir fiyat belirleyiniz.
	*/
	/* BEGIN 0 */
	int fiyatTutar,taksitMiktari;
	char kullaniciCevabi;
	srand(time(NULL));
	fiyatTutar=rand()%2000;
	printf("Yaptiginiz alisveris tutari:%d TL\n",fiyatTutar);

	printf("Taksit ister misiniz(E-H):");
	kullaniciCevabi=getchar();
	if(kullaniciCevabi=='E'){
		printf("Kac taksit uygulanmasini istersiniz(3-6-9):");
		scanf("%d",&taksitMiktari);
		switch(taksitMiktari){
			case 3:
				fiyatTutar+=fiyatTutar*0.03;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			case 6:
				fiyatTutar+=fiyatTutar*0.06;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			case 9:
				fiyatTutar+=fiyatTutar*0.09;
				printf("%d taksit uygulandi",taksitMiktari);
				break;
			default:
				printf("Girdiginiz taksit miktari uygun olmadi.Taksit uygulanmiyor.\n");
		}
	}
	else{
		printf("Herhangi bir taksit uygulanmadi.\n");
	}
	printf("Musteri kartiniz var mi(E-H):");
	fflush(stdin); 
	kullaniciCevabi=getchar();
	if(kullaniciCevabi=='E'){
		fiyatTutar-=fiyatTutar*0.05; //yuzde 5
	}
	else{
		printf("Herhangi bir indirim uygulanmadi.\n");
	}
	printf("Total miktar:%d TL",fiyatTutar);
	/* END 0 */


	/* Ucgen Olusma sarti KontrolU ---------------------------*/
	/*
	* Kullanicidan 3 adet ucgen kenar bilgisi aliniz, bu kenarlara gore ucgen olusturabilir mi bunu degerlendiriniz.
	ucgen olusturma kurallari icin interneti kullanabilirsiniz
	* kenarlar x,y,z ise 
	x icin |y-z|<x<y+z
	y icin |x-z|<y<x+z
	z icin |x-y|<z<x+y
	*/
	/* BEGIN 1 */
	int x,y,z;
	printf("Lutfen sirasiyla x,y,z kenar bilgilerini giriniz:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(abs(y-z)<x && x<y+z){
		if(abs(x-z)<y && y<x+z){
			if(abs(y-x)<z && z<x+y){
				printf("Girdiginiz kenar bilgilerine gore bir ucgen olusturulabilir.\n");
			}
			else{
				printf("Z kenari ucgen olusumunu engelliyor.\n");
			}
		}
		else{
			printf("Y kenari ucgen olusumunu engelliyor.\n");
		}
	}
	else{
		printf("X kenari ucgen olusumunu engelliyor.\n");
	}
	/* END 1 */

	return 0;
}