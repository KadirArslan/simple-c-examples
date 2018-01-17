#include<iostream>
using namespace std;
struct tarih
{
	int gun, ay, yil;
};
struct tarih yas(struct tarih, struct tarih);
int main()
{
	struct tarih bugun, dogum, sonuc;
	cout << "Bugunun Tarihini Girin...:(Gun Ay Yil)" << endl;
	cin >> bugun.gun >> bugun.ay >> bugun.yil;
	cout << "Dogum Tarihini Girin...:(Gun Ay Yil)" << endl;
	cin >> dogum.gun >> dogum.ay >> dogum.yil;

	sonuc = yas(bugun, dogum);
	cout << sonuc.yil << " " << "Yil" << " " << sonuc.ay << " " << "Ay" << " " << sonuc.gun << " " << "Gun" << endl;
	cin.get();
    return 0;
}
struct tarih yas(struct tarih x, struct tarih y)
{
	struct tarih sonuc = { 0,0,0 };
	if (x.gun <y.gun)
	{
		x.ay -= 1;
		sonuc.gun = 30 + x.gun - y.gun;
	}
	else sonuc.gun = x.gun - y.gun;

	if (x.ay < y.ay)
	{
		x.yil -= 1;
		sonuc.ay += 12 + x.ay - y.ay;
	}
	else sonuc.ay = x.ay - y.ay;

	sonuc.yil = x.yil - y.yil;
	return sonuc;
}
