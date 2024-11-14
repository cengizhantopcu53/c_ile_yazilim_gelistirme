#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*	
	* Tek boyutluda belirttigimiz elaman sayisi sutun sayisidir.
	* iki boyutluda ilk kisim satir sayisi, ikinci kisimda sutun sayisini belirtiyoruz. 
	* Toplam eleman sayisi, satir sayisi ile sutun sayisinin carpimidir.
	* Toplam 100 eleman oldugundan 400 byte yer kaplar.*/
	/*
	/* BEGIN 0 */
	int ikiBoyutluDizi[10][10];
	printf("Hafizada kapladigi alan:%d byte\n",sizeof(ikiBoyutluDizi));
	/* END 0 */	


	/*	İki boyutlu dizi icin elemanlari yazarken {} icerisindeki birden fazla {} parantezin kendisi satiri
	parantez icindeki elemanlar sutunu temsil ediyor. 
	* i degiskeni satirlari, j degiskeni sutunlari temsil ediyor.
	*/
	/* BEGIN 1 */
	int ikiBoyutluDizi1[10][10]={{1,3,5},{8,4,5},{1,4,6}};
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d ",ikiBoyutluDizi1[i][j]);
		}
		printf("\n");
	}
	/* END 1 */	
	
	
	/*	
	* Dizinin eleman sayilarini yazarken satir kismina elaman sayisi yazmasak program calisir 
	fakat dizinin bazi elemanlarina kendisi sayi ekler ama sutun kismina elaman sayisi yazmasak program calismaz. 
	* Satir sayisi bos gecilebilir, sutun sayisi bos gecilemez.*/
	/*
	/* BEGIN 2 */
	int ikiBoyutluDizi2[10][10]={{1,3,5},{8,4,5},{1,4,6}};
	int k,m;
	
	for(k=0;k<10;k++){
		for(m=0;m<10;m++){
			ikiBoyutluDizi2[k][m]=k*m;
		}
	}
	
	for(k=0;k<10;k++){
		for(m=0;m<10;m++){
			printf("%d\t",ikiBoyutluDizi2[k][m]);
		}
		printf("\n");
	}
	/* END 2 */	

	
	/*
	* ust ucgen yapmak icin sart kismina i<=j dememiz yeterlidir.	
	Alttaki gibi yapmak icin sart kismina i%2==0 yazariz.
	*/
	/* BEGIN 3 */
	int ikiBoyutluDizi3[10][10];
	int a,b;
	
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			if(a==b){
				ikiBoyutluDizi3[a][b]=1;
			}
			else{
				ikiBoyutluDizi3[a][b]=0;
			}
		}
	}
	
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			printf("%d",ikiBoyutluDizi3[a][b]);
		}
		printf("\n");
	}	
	/* END 3 */	
	

	/* BEGIN 4 */
	int ikiBoyutluDizi4[10][10];
	int x,y;	
	
		for(x=0;x<10;x++){
		for(y=0;y<10;y++){
			if(x%2==0){
				ikiBoyutluDizi4[x][y]=1;
			}
			else{
				ikiBoyutluDizi4[x][y]=0;
			}
		}
	}
	
	for(x=0;x<10;x++){
		for(y=0;y<10;y++){
			printf("%d",ikiBoyutluDizi4[x][y]);
		}
		printf("\n");
	}
	/* END 4 */	


	/* BEGIN 5 */
	int ucBoyutluDizi[10][10][10];
	printf("Kapladigi alan:%d",sizeof(ucBoyutluDizi));
	/* END 5 */	

	return 0;
}
