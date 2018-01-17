#include<iostream>
#include<time.h>
#include<Windows.h>
#include<iomanip>
using namespace std;
//Gerekli kutuphaneler eklendi.

class incell  //Hucre cizdirecek fonsiyonu barindiran ve icini duzenleyen incell adinda class olusturuldu.
{
public:
	void charVar()
	{
		char rast[30];
		for (int i = 0; i < 1; i++)
		{
			rast[i] = rand() % 26 + 65;
			cout << rast[i];
		}
	}//rast adinda dizi olusturuldu. ASCII kodlariyla rastgele harfler atandi.
	void piecevar()
	{
		int piece;
		piece = rand() % 10;
		cout << piece; //pieceVar adinda fonksiyon olusturuldu.Burada rand komutu kullanilarak rastgele sayi,%10 kullanarak sayilarin 10'a gore modlari alindi.
	}
	void colorAssing()
	{
		int color;
		color = rand() % 6 + 9;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);//colorAssing adinda fonksiyon olusturuldu. 9-15 arasindaki renkler kullanilacagi icin rand()%6+9 eklendi.
	}
	void boxColor(int bxcolor)
	{
		bxcolor = 7;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), bxcolor);//Kutularin rengini beyaz atayan fonksiyon.
	}
	
	    char DUZCIZGI = 205; 
		char SOLUSTKOSE = 201; 
		char SAGUSTKOSE = 187; 
		char DIKEYCIZGI = 186; 
		char ASAGIAYRAC = 203; 
		char SOLALTKOSE = 200;
		char SAGALTKOSE = 188; 
		char YUKARIAYRAC = 202; 
	void drawCell()
	{ 
		cout << SOLUSTKOSE<<DUZCIZGI;
		for (int i = 2; i < 25; i++)
		{
			cout << DUZCIZGI;
			if ( i % 3== 0&&i!=24)
			{
				boxColor(7);
				cout << ASAGIAYRAC;
			}
		}
		cout << SAGUSTKOSE;
		cout << endl;
		for (int k = 2; k < 27; k += 3)
		{
			boxColor(7);
			cout << DIKEYCIZGI << " ";
			colorAssing();
			charVar();
			cout << " ";
			if (k == 23)
			{
				boxColor(7);
				cout << DIKEYCIZGI;
				break;
			}
		}
		cout << endl; 
		for (int k = 2; k < 27; k += 3)
		{
			boxColor(7);
			cout << DIKEYCIZGI << " ";
			colorAssing();
			piecevar();
			cout << " ";
			if (k == 23)
			{
				boxColor(7);
				cout << DIKEYCIZGI;
				break;
			}
		}
		cout << endl;
		for (int k = 2; k < 27; k++)
		{
			if (k == 2)
			{
				cout << SOLALTKOSE;
			}
			if (k % 3 == 0 && k != 24)
			{
				cout << DUZCIZGI<<DUZCIZGI<<DUZCIZGI << YUKARIAYRAC;
			}
		}
		cout <<DUZCIZGI<<DUZCIZGI<<DUZCIZGI<<setw(1)<< SAGALTKOSE;
	}
};

int main()
{
	srand(time(0));
	incell boxes; //boxes adinda bir nesne olusturuldu.
	boxes.drawCell();  //drawCell fonksiyonu cagirildi.
	cout << endl;
	return 0;
}

