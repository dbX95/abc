#include "Dongu.h"
#include "Help.h"
#include "Islemler.h"
#include "Esitlik.h"
#include "topla.h"
#include "fark.h"
#include "carpim.h"
#include"bolum.h"
#include <iostream>


using namespace std;

double dongu() {
	char bilgilendirme;
	char cikis = 'x';
	help();
	str str_inputs;

	//str_inputs.da = 0;
	//str_inputs.db = 0;
	//str_inputs.op = ' ';


	cout << "\n Birinci sayiyi girin: ";
	cin >> str_inputs.da;




	


		cout << "\n Islem : ";
		cin >> str_inputs.op;
	

	cout << "\n Ikinci sayiyi girin: ";
	cin >> str_inputs.db;


	double sonuc = Hesapla(str_inputs);

	if (str_inputs.op == '+' || str_inputs.op == '-' ||
		str_inputs.op == '*' || str_inputs.op == '/') {
		esitlik(str_inputs.da, str_inputs.db);
	}

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
		cin >> str_inputs.op;
		cout << "Sonuc ile isleme sokulacak sayiyi girin: ";
		cin >> str_inputs.db;
		double donguSonuc = Hesapla(str_inputs);
		sonuc = donguSonuc;

		cout << "Programdan cikmak istiyor musunuz ? \n Cikmak istiyorsaniz e harfi girin : \n Devam etmek istiyorsaniz herhangi bir tusa basin : \n";
		cin >> cikis;



	}
	cout << "Program Kapatildi.";
	return sonuc;
}




