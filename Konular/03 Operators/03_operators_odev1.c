#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

	/* Delta hesaplama ------------------------------------*/
	/*
	* Kullanicidan a,b,c degerleri alarak delta hesaplamasi ve deltanin 0dan buyuk mu kucuk mu oldugunun sorgusunu yapan program yaziniz.
	* math.h kutuphanesini ekliyorum
	* delta=b^2-4*a*c
	*/
	/* BEGIN 0 */
	/*
	int a,b,c;
	float deltaSonucu;
	printf("Lutfen sirasiyla a,b,c degerlerini giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Girdiginiz degerler sirasiyla:%d %d %d\n",a,b,c);
	deltaSonucu=pow(b,2)-4*a*c;                                      
	printf("Delta sonucunuz:%.2f\n",deltaSonucu);
	printf("Delta karsilastirma sonucunuz:%d",deltaSonucu>=0);
	*/
	/* END 0 */


	/* Ders durumu hesaplama ------------------------------------*/
	/*
	* Kullanicidan vize,final notlarini yuzdeleriyle birlikte alarak ortalama hesabi yapiniz,dersin can degerine gore dersi geciyorsa 1
	gecemiyorsa 0 yazdiriniz.
	*/
	/* BEGIN 0 */
	/*
	int vizeNotu,finalNotu,vizeYuzdesi,canDegeri=60;
	float ogrenciOrtalamasi;
	printf("\nLutfen sirasiyla vize notunuzu ve vize yuzdenizi giriniz:");
	scanf("%d%d",&vizeNotu,&vizeYuzdesi);
	printf("Lutfen final notunuzu giriniz:");
	scanf("%d",&finalNotu);
	printf("Vize Notunuz:%d(Yuzdesi:%d),Final Notunuz:%d(Yuzdesi:%d)\n",vizeNotu,vizeYuzdesi,finalNotu,100-vizeYuzdesi);
	ogrenciOrtalamasi=(vizeNotu*vizeYuzdesi+finalNotu*(100-vizeYuzdesi))/100;
	printf("Ders Ortalamaniz:%.2f\n",ogrenciOrtalamasi);
	printf("Ders Gecme Durumunuz:%d",ogrenciOrtalamasi>=canDegeri);
	*/
	/* END 0 */


	/* Dairenin cevresi ve alani hesapalam ------------------------------------*/
	/*
	* Kullanicidan yaricap alip dairenin cevresini ve alanini hesaplayiniz.
	* daire cevresi=2*pi*r
	* daire alani=pi*r^2
	*/
	/* BEGIN 0 */
	#define pi 3.14
	float yaricap,cevre,alan;
	printf("\nLutfen bir yaricap degeri giriniz:");
	scanf("%f",&yaricap);
	printf("Girdiginiz yaricap degeri:%.2f\n",yaricap);
	cevre=2*pi*yaricap;
	alan=pi*pow(yaricap,2);
	printf("Cevre:%.2f Alan:%.2f",cevre,alan);
	/* END 0 */

	return 0;
}