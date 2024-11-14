#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

	/* Karakteri ile 4 Farkli Tipte Piramit Olusturma -------------------------- */
	/* BEGIN 0 */
	int piramitLimit,i,j;
	printf("Lutfen piramit limitini giriniz:");
	scanf("%d",&piramitLimit);
	
	for(i=1;i<=piramitLimit;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=0;i<piramitLimit;i++){
		for(j=piramitLimit-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=0;i<piramitLimit;i+=2){
		for(j=piramitLimit-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=piramitLimit;i+=2){
		for(j=0;j<(piramitLimit-i)/2;j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		for(j=0;j<(piramitLimit-i)/2;j++){
			printf(" ");
		}
		printf("\n");
	}
	/* END 0 */

	return 0;
}