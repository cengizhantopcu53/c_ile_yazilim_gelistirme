#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Girilen Sayıyı Terse Çevirme -------------------------- */
	/* BEGIN 0 */
	int sayi,geciciSayi,sayininTersi=0,kalan;
	
	printf("Lutfen tersi alinacak sayiyi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	while(geciciSayi!=0){
		kalan=geciciSayi%10;
		sayininTersi=sayininTersi*10+kalan;
		geciciSayi/=10;
	
	}	
	printf("%d sayinin tersi:%d",sayi,sayininTersi);
	/* END 0 */


	/* Girilen Sayıyı Bit Düzeyine Çevirme -------------------------- */
	/* BEGIN 1 */
	int sayi1,geciciSayi1,i=0;
	char bitArray[32];
	
	printf("Lutfen bit duzeyine cevrilecek sayiyi giriniz:");
	scanf("%d",&sayi1);
	geciciSayi1=sayi1;
	
	while(geciciSayi1!=0){
		if(geciciSayi1%2==0){
			bitArray[i]='0';
		}
		else{
			bitArray[i]='1';
		}
		i++;
		geciciSayi/=2;
	}

	printf("%d sayisinin bit karsiligi:",sayi1);
	while(i>=0){
		printf("%c",bitArray[i]);
		i--;
	}
	/* END 1 */
	
	return 0;
}
