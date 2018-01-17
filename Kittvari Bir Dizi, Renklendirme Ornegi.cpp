#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

enum RENKLER
{
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROWN = 6,
	LIGHTGRAY = 7,
	DARKGRAY = 8,
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
	WHITE = 15
};
void renkSec1(int yazirenk)
{
	yazirenk = 13;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), yazirenk);
}

void renkSec2(int isaretrenk)
{
	 isaretrenk = 11;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), isaretrenk);
}
void gidensembol(RENKLER renk)
{
	char sembol = '>';
	renkSec2(11);
	cout << sembol;
}
void gelensembol( RENKLER renk)
{
	char gsembol = '<';
	renkSec2(11);
	cout << gsembol;

}
int main()
{
	char karakter;
	int boyut, index, hiz, i;

	cout << "Karekter Girin...:";
	cin >> karakter;
	cout << "Dizi Boyutu.....:";
	cin >> boyut;
	cout << "Hiz(1-10) Arasý...:";
	cin >> hiz;

	system("cls");
	index = 0;
	while (true)
	{
		system("cls");
		for (int i = 0; i < boyut; i++)
		{
			if (index - 1 == i)
				gidensembol( LIGHTCYAN);
			else
			{
				renkSec1(13);
				cout << karakter;
			}
		}
		index++;

		if ((index - 1) == boyut)
		{
			Sleep(100 * hiz);
			do
			{
				system("cls");
				for (int a = 0; a < boyut; a++)
				{
					if ((index - 2) == a)
						gelensembol(LIGHTCYAN);
					else
					{
						renkSec1(13);
						cout << karakter;
					}
				}
				index--;
				Sleep(100 * hiz);
			} while ((index - 1) > 0);
			Sleep(100 * hiz);

		}
	}
	return 0;
}
