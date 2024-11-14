#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

	/* Matris Çarpımı -------------------------- */
	/*
	* İki adet Matris oluşturup, bu iki matrisi çarparak yeni bir matris oluşturma.
	*/
	/* BEGIN 0 */
	/*
	int matrisA[5][5],matrisB[5][5],sonucMatris[5][5],i,j,k,toplam;
	srand(time(NULL));
	printf("Ilk matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matrisA[i][j]=rand()%5;//RASTGELE DEGER ATAMA
			matrisB[i][j]=rand()%5;
			printf("%d\t",matrisA[i][j]);//ILK MATRİSİ YAZDIRDIM
		}
		printf("\n");
	}
	printf("Ikinci matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",matrisB[i][j]);//IKINCİ MATRİSİ YAZDIRDIM
		}
		printf("\n");
	}
	printf("Sonuc matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			toplam=0;
			for(k=0;k<5;k++){
				toplam+=matrisA[i][k]*matrisB[k][j];
			}
			sonucMatris[i][j]=toplam;
			printf("%d\t",sonucMatris[i][j]);
		}
		printf("\n");
	}
	*/
	/* END 0 */


	/* Tek Boyutlu Matrisi İki Boyutluya Çevirme -------------------------- */
	/*
	* Tek boyutlu oluşturulan bir matrisi kullanıcıdan alınan satır ve sütun sayısına göre iki boyutlu matrise çevirme
	*/
	/* BEGIN 1 */
	/*
	int dizi[12],satir,sutun,i,j;
	srand(time(NULL));
	for(i=0;i<12;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nLutfen satir ve sutun sayisini giriniz:");
	scanf("%d%d",&satir,&sutun);
	int ikiBoyutluDizi[satir][sutun];
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			ikiBoyutluDizi[i][j]=dizi[sutun*i+j];
			printf("%d\t",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	*/
	/* END 1 */


	/* ------------------------------------------------------ */
	/* 
	* Oluşturulan matrisin simetrik olup olmadığını sorgulama
	*/
	/* BEGIN 2 */
	int ikiBoyutluDizi[3][3]={{1,3,3},{2,1,3},{3,3,1}},i,j,sorgu=0;//esit.
	printf("Ilk matris:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",ikiBoyutluDizi[i][j]);//ILK MATRİSİ YAZDIRDIM
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(ikiBoyutluDizi[i][j]!=ikiBoyutluDizi[j][i]){
				sorgu=1;
				break;
			}
		}
	}
	
	if(sorgu){
		printf("Girdiginiz dizi simetrik degildir.");
	}
	else{
		printf("Simetriktir.");
	}
	/* END 2 */

	return 0;
}