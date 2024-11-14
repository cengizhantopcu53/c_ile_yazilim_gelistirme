#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
    * While döngüsünde arttırma işlemi yapmamız gerekiyor yoksa sonsuz döngüye giriyor. 
	Çünkü i sayısı 0 olduğundan ve arttırma olamadığından devamlı i değişkeni 
	10'dan küçük olacağından printf içerisindekini devamlı yazar.
	*/
	/* BEGIN 0 */
	int i = 0;
	while(i < 10)
	{
		printf("i sayisi:%d\n",i);
		i++;
	}
	/* END 0 */
	
	
	/*
	* Do-while döngüsünün while döngüsünden farkı bir kez çalışmasıdır.
	*/
	/* BEGIN 1 */
	int a=0;
	do
	{
		printf("a sayisi:%d\n",a);
		a++;
	}
	while(a<0);
	/* END 1 */
	

	/*
	* Break satırına geldiği zaman döngü sonlanır.
	*/
	/* BEGIN 2 */
    int k=0;
	while(k<10)
	{
		if(k==5)
		{
			break;
		}
		printf("k sayisi:%d\n",k);
		k++;
	}
	/* END 2 */
	

	/*
	* Continue satırına geldiği alt satırlar tamamen atlanır, döngü başa döner. 
	*/
	/* BEGIN 3 */
    int x=0;
	while(1)
	{
		x++;
		if(x==10)
		{
			break;
		}
		if(x%2==0)
		{
			continue;
		}
		printf("x sayisi:%d\n",x);
	}
	/* END 3 */
	

	/* BEGIN 4 */
	int sayi,geciciSayi,basamakSayisi=0;
	printf("Lutfen bir sayi  degeri giriniz:");
	scanf("d",&sayi),
	geciciSayi=sayi;
	printf("Sayinin Tersi:");
	while(geciciSayi!=0)
	{
		printf("%d",geciciSayi%10);
		geciciSayi/=10;
		basamakSayisi++;
	}
	printf("\n%d sayisi %d basamaklidir.\n",sayi,basamakSayisi);
	/* END 4 */

	return 0;
}
