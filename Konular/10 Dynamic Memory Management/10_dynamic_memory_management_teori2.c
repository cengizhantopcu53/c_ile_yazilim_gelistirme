#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

	/* tek boyutlu dizilerde dinamik bellek yonetimin kullanimi --------------------*/
	/*
	* Dizide kaç eleman kullandigimizi bilmedegimizden kullanicdan ne kadar kullanacaği bilgisini aliyoruz.
	*/
	/* BEGIN 0 */
	int elemanSayisi,i;
	srand(time(NULL));
	printf("Lutfen kac adet eleman gerektigini giriniz:");
	scanf("%d",&elemanSayisi);
	int *dizi=(int *)malloc(sizeof(int)*elemanSayisi);
	int *ptr=dizi;   //Adres esitlemesi

	//for(i=0;i<elemanSayisi;i++){
		//dizi[i]=i;
	//}
	//for(i=0;i<elemanSayisi;i++){
		//printf("%d\n",dizi[i]);
	//}

	for(ptr=dizi;ptr<=dizi+elemanSayisi-1;ptr++){
		*ptr=rand()%100;
	}
	for(ptr=dizi;ptr<=dizi+elemanSayisi-1;ptr++){
		printf("%d\n",*ptr);
	}
	printf("\n");
	for(ptr=dizi+elemanSayisi-1;ptr>=dizi;ptr--){    //tersten hali
		printf("%d\n",*ptr);
	}
	free(dizi);
	/* END 0 */	

	return 0;
}
