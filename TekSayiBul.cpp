#include<iostream>
using namespace std;

int main()
{
	int sy1,sy2, tutulan;
	int rak = 0;
	int son = 0;
	/* Burada bize yard�m� dokuncak de�i�kenler atand�*/
	cout << "Bir Sayi Giriniz...:" ;
	cin >> sy1;
	tutulan = sy1; /*Burada Kullan�c�dan Bize Bir De�er Girmesi �stendi Ve Bu De�er sy1 de�i�kenine atand�.Ekran ��kt�s�nda
				   Ters Yazd�rma Sorunu ��zmek ��in Kullan�c�dan Al�nan Bu Say� tutulan Adl� Di�er De�i�kene Atand� Ve 
				   While D�ng�s�ne Sokuldu*/

	while (tutulan > 0) 
	{
		sy2 = tutulan % 10;
		son = son * 10 + sy2;
		tutulan /= 10;
		/*Bu B�l�m Ters Olan Ekran ��kt�s�n� D�zelmek ��in. �r=359'u 953 Haline Getirmek ��in*/
	}
	
	cout << "Tek Sayilar........:";
	while (son > 0) /*Burada Kullan�c�dan Al�nan Say�n�n S�rekli Mod 10'a g�re De�eri Al�nd� Ve B�ylece Say� Tek Tek Rakamlara
					Ayr�ld�*/
	{
		rak = son % 10;
		if (rak % 2 == 1)   /*Burada rakam�n 2'ye g�re Modu al�nd� ve kalan=1 oldu�u durumda ekrana yaz�ld�*/
		{
			cout << rak;
		}
		son = son / 10;
	}
	 cout << endl;
		return 0;/*Program� ekranda tutmas� i�in*/
}

