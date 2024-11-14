#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	/* strlen, strcpy, strcat, strcmp fonksiyonlari -------------------------------- */
	/*	
	String kutuphanesinde tanimli 4 fonksiyonu gorecegiz. 
	Strlen() fonksiyonu verdiginiz stringin, karakter uzunlugunu veriyor. 
	Null karakteri dikkate almaz.
	Strcpy() fonksiyonu gonderdiginiz ikinci stringi, birinci stringe kopyaliyor.
	Strcat() fonksiyonu gonderdiginiz ikinci stringi, birinci stringin sonuna ekliyor
	Strcmp() fonksiyonu gonderdiginiz iki stringi birbiriyle karsilastiriyor.
	Eger ki birbirinin tamamen aynisi ise 0 sonucu donuyor. 
	Eger ilk string alfabetik olarak ikinciden sonra geliyorsa 0'dan buyuk bir sonuc donuyor. 
	Eger ki ilk string alfabetik olarak ikinciden once geliyorsa 0'dan kucuk bir sonuc donuyor.
	Fonksiyonun ilk kismina hedef, ikinci kismina kaynak yazilir.
	*/
	/* BEGIN 0 */
	char aisim[20];
	puts("Lutfen bir isim giriniz:");
	gets(aisim);
	int akaraktersayisi=strlen(aisim);
	printf("%s stringi %d adet karakter icermektedir\n",aisim,akaraktersayisi);
	/* END 0 */	
	

	/* BEGIN 1 */
	char bisim[20];
	char bisim2[20];
	
	puts("Lutfen bir isim giriniz:");
	gets(bisim);
	strcpy(bisim2,bisim);
	int bkaraktersayisi=strlen(bisim2);
	printf("%s stringi %d adet karakter icermektedir\n",bisim2,bkaraktersayisi);
	/* END 1 */	
	

	/* BEGIN 2 */
	char cisim[20];
	char cisim2[20];
	
	puts("Lutfen bir isim giriniz:");
	gets(cisim);
	puts("Lutfen bir isim daha giriniz:");
	gets(cisim2);
	strcat(cisim2,cisim);
	int ckaraktersayisi=strlen(cisim2);
	printf("%s stringi %d adet karakter icermektedir\n",cisim2,ckaraktersayisi);
	/* END 2 */	
	

	/* BEGIN 3 */
	char isim[20];
	char isim2[20];
	
	puts("Lutfen bir isim giriniz:");
	gets(isim);
	puts("Lutfen bir isim daha giriniz:");
	gets(isim2);
	
	int karsilastirmasonucu=strcmp(isim,isim2);
	if(karsilastirmasonucu==0){
		printf("iki string birbirinin aynisidir");
	}
	else if(karsilastirmasonucu>0){
		printf("ilk string alfabetik olarak ikinciden sonra geliyordur");
	}
	else{
		printf("ilk string alfabetik olarak ikinciden once geliyordur");
	}
	/* END 3 */	
	
	
	return 0;
}
