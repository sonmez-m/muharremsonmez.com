#include <stdio.h>

/* Bu satırlar yorum satırları
 * Bunlar compile edilmeyecek
 * Buraya istediğimi yazabilirim
 */
int main(void) //Basit bir program, ilk programım
{
	printf("merhaba\n"); /* Ekrana merhaba yazacak*/
		
	int sayi; //Bir tam sayı değiskeni
	
	sayi = 25; //Değiskene bir değer atıyorum
	
	/*Ekrana birkaç yazı yazdıralım*/
	printf("Ben tek satırdayım ");
	printf("aslında.\n");
	printf("Ben de iki\n satırdayım.\n");
	
	//Değikendeki değeri görelim
	printf("sayi değiskeninin değeri %d'dir.", sayi);
	
	//Bilgisayara problemsiz islemleri bitirip kapandığımızı söyleyelim.
	return 0; 
}
