#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	/* Belirli Araliktaki Asal Sayilari Yazdirma -------------------------- */
	/*
	* Kullanicidan bir deger araligi alip o araliktaki tum asal sayilari yazdiran program yapiniz
	*/
	/* BEGIN 0 */
	int altLimit,ustLimit,bolunmeSorgusu;
	int i,j;
	
	printf("Lutfen alt ve ust limit bilgilerini giriniz:");
	scanf("%d%d",&altLimit,&ustLimit);
	
	for(i=altLimit;i<=ustLimit;i++){
		bolunmeSorgusu=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				bolunmeSorgusu=1;
				break;//geriye kalani kontrol etmeye gerek yok.
			}
		}
		if(!bolunmeSorgusu){
			printf("%d ",i);
		}
	}
	/* END 0 */

	return 0;
}