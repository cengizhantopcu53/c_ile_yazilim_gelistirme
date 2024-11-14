#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Doğrusal Arama -------------------------- */
	/* BEGIN 0 */
	int dizi[10],i,arananDeger,bulunduMu=0;
	srand(time(NULL));
	printf("Dizi:");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nLutfen aranacak olan degeri giriniz:");
	scanf("%d",&arananDeger);
	for(i=0;i<10;i++){
		if(dizi[i]==arananDeger){
			bulunduMu=1;
			break;
		}
	}
	if(bulunduMu){
		printf("Degerimiz bulundu.");
	}
	else{
		printf("Bulunamadi");
	}
	/* END 0 */


	/* Dizi Siralama -------------------------- */
	/* BEGIN 1 */
	int dizi[10],i,j,eleman;
	srand(time(NULL));
	printf("Dizi:\n");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nSirali dizi:\n");
	for(i=0;i<10;i++){
		eleman=dizi[i];
		for(j=i-1;j>=0 && eleman<=dizi[j];j--){
			dizi[j+1]=dizi[j];
		}
		dizi[j+1]=eleman;
	}
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}

	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(dizi[j]>dizi[j+1]){
				int gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}
		}
	}
	printf("\nSirali Dizi:\n");
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}
	/* END 1 */

	return 0;
}
