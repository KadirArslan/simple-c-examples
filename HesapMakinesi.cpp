#include<iostream>
using namespace std;

int main()
{
	double sayi1, sayi2;
    int	islem;
	cout << "1.Sayiyi giriniz : ";
	cin >> sayi1;
	cout << "2.Sayiyi giriniz : ";
	cin >> sayi2;

	cout << "Bir Islem Seciniz" << endl << "1..Toplama" << endl << "2..Cikarma" << endl << "3..Carpma" << endl << "4.Bolme" << endl;
	cin >> islem;

	switch (islem)
	{
		
	case 1: cout << "Sayilarin Toplami:" << sayi1 + sayi2 << endl;
		break;
	case 2: cout << "Sayilarin Farki:" << sayi1 - sayi2 << endl;
		break;
	case 3: cout << "Sayilarýn Çarpimi:"<< sayi1 * sayi2 << endl;
		break;
	case 4: cout << "Sayilin Bolumu:" <<sayi1 / sayi2 << endl;
		break;

	default: cout << "Hatali Giris Lutfen Yeniden Giriniz" << endl;
	
	}
    return 0;
}

