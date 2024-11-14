#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Matris Toplami -------------------------- */
	/* BEGIN 0 */
	int ilkMatris[5][5],ikinciMatris[5][5],toplamMatris[5][5],i,j;
	srand(time(NULL));
	printf("Ilk Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ilkMatris[i][j]=rand()%10;
			ikinciMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
		}
		printf("\n");
	}
	printf("Ikinci Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",ikinciMatris[i][j]);
		}
		printf("\n");
	}
	printf("Toplam Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			toplamMatris[i][j]=ilkMatris[i][j]+ikinciMatris[i][j];
			printf("%d\t",toplamMatris[i][j]);
		}
		printf("\n");
	}
	/* END 0 */


	/* Matris Transpozu Hesaplama -------------------------- */
	/* BEGIN 1 */
	/*
	int ilkMatris[5][5],transpozMatris[5][5],i,j;
	srand(time(NULL));
	printf("Ilk Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
		}
		printf("\n");
	}
	printf("Transpoz Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			transpozMatris[i][j]=ilkMatris[j][i];
			printf("%d\t",transpozMatris[i][j]);
		}
		printf("\n");
	}
	*/
	/* END 1 */



	
	return 0;
}
