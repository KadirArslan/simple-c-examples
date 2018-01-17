#include<iostream>
using namespace std;

int main()
{
	int sy1,sy2, tutulan;
	int rak = 0;
	int son = 0;
	/* Burada bize yardýmý dokuncak deðiþkenler atandý*/
	cout << "Bir Sayi Giriniz...:" ;
	cin >> sy1;
	tutulan = sy1; /*Burada Kullanýcýdan Bize Bir Deðer Girmesi Ýstendi Ve Bu Deðer sy1 deðiþkenine atandý.Ekran Çýktýsýnda
				   Ters Yazdýrma Sorunu Çözmek Ýçin Kullanýcýdan Alýnan Bu Sayý tutulan Adlý Diðer Deðiþkene Atandý Ve 
				   While Döngüsüne Sokuldu*/

	while (tutulan > 0) 
	{
		sy2 = tutulan % 10;
		son = son * 10 + sy2;
		tutulan /= 10;
		/*Bu Bölüm Ters Olan Ekran Çýktýsýný Düzelmek Ýçin. Ör=359'u 953 Haline Getirmek Ýçin*/
	}
	
	cout << "Tek Sayilar........:";
	while (son > 0) /*Burada Kullanýcýdan Alýnan Sayýnýn Sürekli Mod 10'a göre Deðeri Alýndý Ve Böylece Sayý Tek Tek Rakamlara
					Ayrýldý*/
	{
		rak = son % 10;
		if (rak % 2 == 1)   /*Burada rakamýn 2'ye göre Modu alýndý ve kalan=1 olduðu durumda ekrana yazýldý*/
		{
			cout << rak;
		}
		son = son / 10;
	}
	 cout << endl;
		return 0;/*Programý ekranda tutmasý için*/
}

