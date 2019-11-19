#include "Islemler.h"
#include "Help.h"
#include <math.h>
#include <iostream>
using namespace std;

double Hesapla(double sayi1, char islem, double sayi2) {

	double sonuc;
	
	switch (islem) {

	case '+':
		sonuc = sayi1 + sayi2;
		
		cout << "\n Toplama islemi sonucu = " <<sonuc<<"\n";
		return sonuc;
		break;

	case '-':
		sonuc = sayi1 - sayi2;
	
		cout << "\n Cikartma islemi sonucu = " << sonuc << "\n";
		return sonuc;
		break;

	case '*':
		sonuc = sayi1 * sayi2;
		
		cout << "\n Carpma islemi sonucu = " << sonuc << "\n";
		return sonuc;
		break;

	case '/':

		if (sayi2 == 0) {
			cout << "Sayi 0 a bolunemez. \n ";
				return 0;
		}
		else
		sonuc = sayi1 / sayi2;
	
		cout << "\n Bolme islemi sonucu = " << sonuc << "\n";
		return sonuc;
		break;
	default:
		cout << "\n Yanlis islem sectiniz \n";
		return -1;
		break;
	}
		
}


