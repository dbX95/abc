#include "Dongu.h"
#include "Help.h"
#include "Islemler.h"
#include "Esitlik.h"
#include <iostream>
using namespace std;

double dongu() {
	char bilgilendirme;
	char cikis = 'x';
	help();
	double sayiBir, sayiIki;
	char op;

	
	cout << "\n Birinci sayiyi girin: ";
	cin >> sayiBir;

	

	cout << "\n Islem : ";
	cin >> op;

	cout << "\n Ikinci sayiyi girin: " ;
	cin >> sayiIki;


	double sonuc = Hesapla(sayiBir, op, sayiIki);

	if(op== '+' || op == '-' || op == '*' || op == '/')
	
		esitlik(sayiBir,sayiIki);
	

	while (cikis != 'e') {
		cout << "\n Bilgilendirme menusunu gormek istiyor musunuz ? \n Gormek istiyorsaniz  h girin : \n Gormek istemiyorsaniz herhangi bir tusa basin : \n";
		cin >> bilgilendirme;
		if (bilgilendirme == 'h') {
			cout << "\nNe kadar cabuk unuttunuz :)) \n \n ";
			help();
		}
		else {
			cout << "\nHafizaniz kuvvetli :)) \n \n ";
		}
		cout << "Sonuc uzerinden yapilmasini istediginiz islemi secin" << endl;
		cin >> op;
		cout << "Sonuc ile isleme sokulacak sayiyi girin: ";
		cin >> sayiIki;
		double donguSonuc = Hesapla(sonuc, op, sayiIki);
		sonuc = donguSonuc;

		cout << "Programdan cikmak istiyor musunuz ? \n Cikmak istiyorsaniz e harfi girin : \n Devam etmek istiyorsaniz herhangi bir tusa basin : \n";
		cin >> cikis;



	}
	cout << "Program Kapatildi.";
	return sonuc;
}




