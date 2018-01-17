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
	   /*Burada Genişlik Ve Yükseklik Değerlerinin 1-20 Arasında Olana Kadar Değer Girilmesi Sağlandı*/
	
		for (int k = 1; k <= genislik; k++)
		{
			for (int a = 1; a <= yukseklik; a++)
			{
				if ((k == 1 || k == genislik) || (a == 1 || a == yukseklik))
				{
					cout << "*"; /*Döngüde Ekrana Yükseklik-Genişlik  Değerine Kadar '*' Konulması İstendi */
				}
				else
				{
					cout << " "; /*Eğer Koordinatta Yıldızlar Uyuşmuyorsa ' ' Konması İstendi */
				}
			}
			cout << "\n";/*Alt Alta Yıldızı Sağladı*/
		}
		for (int k = 1; k <= yukseklik; k++) /*Burada Yukarıdaki Kodlar Kopyalandı Ve Değiskenler Değiştirildi Böylece
											 Ters Ekran Çıktısıda Alındı*/
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

