#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* BEGIN 0 */
    float kullaniciBakiyesi=1250.0,kullaniciMiktar=0,gunlukLimit=500.0;
	int islem;
	
	printf("\t Merhabalar, Hosgeldiniz\n");
	printf("\t Para yatirmak icin 1, para cekmek icin 2, hesap bakiyesi goruntulemek icin 3'e basiniz:");
	
	scanf("%d",&islem);
	
	if(islem==1){
		printf("\t Yatirmak istediginiz miktari giriniz:");
		scanf("%f",&kullaniciMiktar);
		if(kullaniciMiktar==0){
			printf("\t Lutfen belirtilen surede bir para girisi yapiniz.");
			//sleep(3); //3 saniye boyunca program duracak.
			scanf("%f",&kullaniciMiktar);
		}
		kullaniciBakiyesi+=kullaniciMiktar;
		printf("\t Isleminiz basariyla gerceklesti.Tesekkur Ederiz\n");
		printf("\t Yeni Bakiyeniz:%.2f\n",kullaniciBakiyesi);
	}
	else if(islem==2){
		printf("\t Cekmek istediginiz miktari giriniz:");
		scanf("%f",&kullaniciMiktar);
		if(kullaniciMiktar>kullaniciBakiyesi){
			printf("Hesabinizda o kadar para bulunmamktadir.Islem gerceklesemiyor.\n");
		}
		else if(kullaniciMiktar>gunlukLimit){
			printf("Gunluk para cekme limitini astiniz.Islem gerceklesemiyor.\n");
		}
		else{
			kullaniciBakiyesi-=kullaniciMiktar;
			printf("Isleminiz basariyla geceklesmestir.Tesekkur Ederiz.\n");
			printf("\t Yeni Bakiyeniz:%.2f\n",kullaniciBakiyesi);	
		}			
	}
	else if(islem==3){
		printf("\t Bakiyeniz:%.2f\n",kullaniciBakiyesi);			
	}
	else{
		printf("Yanlis bir islem girdiniz.\n");
	}
	/* END 0 */
	
	return 0;
}
