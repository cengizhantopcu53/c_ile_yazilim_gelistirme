#include <stdio.h>

int main(int argc, char* argv[]) {

    /* degisken tanimlama ve temel veri tipleri -----------------------------------------*/
    /*
    * Degisken degeri bilgisayardaki uygun bellek alandaki adreste depo edilir ve bu adres hex formatindadir 
    boylece degisken adi ile bu adres ifade edilir.
    * %.2f ile degisken degeri yazdirirken virgulden sonra 2 basamak olmasini istedigimizi belirtiyoruz.
    * %X, hex seklinde yazdiriyor. %X'i %#X seklinde yazarsak hex sayilarin basina 0X ekler.
    * Eger degiskenlerin degerlerini yazdirmak istiyorsak sadece degisken isimlerini yazmak yeterli 
    fakat adreslerini yazmak istiyorsak degisken adinin basina & isareti konulur.
    */
    /* BEGIN 0 */
    int sayi, sayi2 = 9;  
    float sayi3 = 5.7;    
    double sayi4 = 2.8;   
    char karakter = 'x';  
    sayi = 5;   

    printf("%d %i %.2f %.2lf %c\n", sayi, sayi2, sayi3, sayi4, karakter);         
    printf("%#X %#X %#X %#X %#X\n", &sayi, &sayi2, &sayi3, &sayi4, &karakter);    
    /* END 0 */


    /* isimlendirme kurallari -----------------------------------------------------------*/
    /*
    * sayi2,for,sayi 5,2sayi gibi ifadeler kullanilamaz.
    */
    /* BEGIN 1 */ 
    int s;
    int sayfaNo;
    int _2sayi;
    /* END 1 */

    return 0;
}
