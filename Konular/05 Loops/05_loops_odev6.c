#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	/* Break ve Continue ile Mukemmel Sayi Sorgusu -------------------------- */
	/*
	*  Sadece break ve continue ile yapiniz.
	*/
	/* BEGIN 0 */
	int sayi,i=1,toplam=0;
	
	printf("Lutfen sorgulanacak sayiyi giriniz:");
	scanf("%d",&sayi);
	//6,1 2 3 4 5
	while(1){
		if(i==sayi){
			break;
		}
		if(sayi%i==0){
			toplam+=i;
		}
		i++;	
	}
	
	if(toplam==sayi){
		printf("%d sayisi mukemmel bir sayidir.\n",sayi);
	}
	else{
		printf("%d sayisi mukemmel bir sayi degildir.\n",sayi);
	}
	/* END 0 */

	return 0;
}