#include<iostream>
using namespace std;

int main()
{
	int genislik, yukseklik;
	cout << "Yukseklik......:";
	cin >> genislik; 
	while (genislik > 20)
	{
		cout << "1-20 Arasinda Bir Deger Girmeniz Gerekiyor" << endl << "Tekrar Deneyiniz" << endl;
		cin >> genislik;
	}
	cout << "Genislik........:";
	cin >> yukseklik; 

	while (yukseklik > 20)
	{
		cout << "1-20 Arasinda Bir Deger Girmeniz Gerekiyor" << endl << "Tekrar Deneyiniz" << endl;
		cin >> yukseklik;
	}
	   /*Burada Geni�lik Ve Y�kseklik De�erlerinin 1-20 Aras�nda Olana Kadar De�er Girilmesi Sa�land�*/
	
		for (int k = 1; k <= genislik; k++)
		{
			for (int a = 1; a <= yukseklik; a++)
			{
				if ((k == 1 || k == genislik) || (a == 1 || a == yukseklik))
				{
					cout << "*"; /*D�ng�de Ekrana Y�kseklik-Geni�lik  De�erine Kadar '*' Konulmas� �stendi */
				}
				else
				{
					cout << " "; /*E�er Koordinatta Y�ld�zlar Uyu�muyorsa ' ' Konmas� �stendi */
				}
			}
			cout << "\n";/*Alt Alta Y�ld�z� Sa�lad�*/
		}
		for (int k = 1; k <= yukseklik; k++) /*Burada Yukar�daki Kodlar Kopyaland� Ve De�iskenler De�i�tirildi B�ylece
											 Ters Ekran ��kt�s�da Al�nd�*/
		{
			for (int a = 1; a <= genislik; a++)
			{
				if ((k == 1 || k == yukseklik) || (a == 1 || a == genislik))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}

			cout << "\n";
		}
		return 0;
	}

