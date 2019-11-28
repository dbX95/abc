#include "Islemler.h"
#include "Help.h"
#include <math.h>
#include "topla.h"
#include "fark.h"
#include <iostream>
#include <carpim.h>
using namespace std;

double Hesapla(const str& in) {

	double sonuc;
	
	switch (in.op) {

	case '+':
		sonuc = topla(in.da, in.db);
		
		cout << "\n Toplama islemi sonucu = " <<sonuc<<"\n";
		return sonuc;

	case '-':
		sonuc = fark(in.da, in.db);
	
		cout << "\n Cikartma islemi sonucu = " << sonuc << "\n";
		return sonuc;
		break;

	case '*':
		sonuc = carp(in.da, in.db);
		
		cout << "\n Carpma islemi sonucu = " << sonuc << "\n";
		return sonuc;
		break;

	case '/':

		if (in.db == 0) {
			cout << "Sayi 0 a bolunemez. \n ";
				return -1;
		}
		else
		sonuc = in.da / in.db;
	
		cout << "\n Bolme islemi sonucu = " << sonuc << "\n";
		return sonuc;
		break;
	default:
		cout << "\n Yanlis islem sectiniz \n";
		return -1;
		break;
	}
		
}


