#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	/*
	* int dizi[20]; tanımlaması yaparsak derlemede bellekte her biri 4 byte'dan 20 veri toplamda 80 byte yer tutacaktır. 
	Eğer biz bunun 10 tanesini kullanırsak bellekte 40 byte boş yere yer tutuacaktır. 
	Bu sebeple dinamik bellek yönetimini kullanmamız gerekiyor. 
	* Bunun için malloc fonksiyonunu kullanacağız ayrica calloc ve realloc fonksiyonlari da kullanilabilir.
	* Malloc fonksiyonu içerisine verdiğimiz bellek boyutu kadar dinamik olarak yer ayrılmasını sağlar. 
	* Free fonksiyonu ile hafızada ayirdigimiz yerin, kullanildiktan sonra tekrar sisteme iade edilir.
	*/
	/* BEGIN 0 */
	int *ptr;   
	ptr=(int *)malloc(sizeof(int));			//Malloc ile ayirdigim 4 bytlik alanin baslangic adresi
	*ptr=15;
	printf("%#X\n",ptr);  
	printf("%d\n",*ptr);      //15 ciktisi veriyor
	free(ptr);
	printf("%#X\n",ptr);  
	printf("%d\n\n",*ptr);      //7078224 sayi ciktisi veriyor
	/* END 0 */	


	/*
	* ptr2 de artik ptr1'in gosterdigi yeri gosteriyor.
	* pt1 ve pt2 pinterlari ayni yeri gösterirse ve free fonksiyonu ile sadece ptr2 değerini bosaltirsak ptr1 de ayni sekil olur
	*/
	/* BEGIN 1 */
	int *ptr1;   
	ptr1=(int *)malloc(sizeof(int));			
	*ptr1=15;
	int *ptr2=ptr1;                  //Adres esitlemesi
	printf("%#X\n",ptr1);  
	printf("%d\n",*ptr1);      
	printf("%#X\n",ptr2);  
	printf("%d\n",*ptr2);   
	free(ptr2);
	printf("%#X\n",ptr1);  
	printf("%d\n",*ptr1);      
	printf("%#X\n",ptr2);  
	printf("%d\n\n",*ptr2);   
	/* END 1 */	


	/* BEGIN 2 */
	int *ptr3;   
	ptr3=(int *)malloc(sizeof(int));			
	*ptr3=15;
	int *ptr4;   
	ptr4=(int *)malloc(sizeof(int));	
	*ptr4=450;	     
	*ptr3=*ptr4;			     //Deger esitlemesi
	free(ptr4);
	printf("%#X\n",ptr3);  
	printf("%d\n",*ptr3);      
	printf("%#X\n",ptr4);  
	printf("%d\n",*ptr4);     
	/* END 2 */	

	return 0;
}
