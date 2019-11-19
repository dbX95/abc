#include "Esitlik.h"
#include <iostream>
#include<math.h>
using namespace std;


void esitlik(double a,double b) {
	double eps = 0.0000001;

	if (fabs(a - b) > eps) {

		cout << "\nIki sayi esit degildir \n";
		
		if (a > b) {
			cout << "Birinci sayi = " << a << "  buyuktur ikinci sayidan ikinci sayi = " << b << endl;
		}
		else if (a < b) {
			cout << "Birinci sayi = " << a << "  kucuktur ikinci sayidan ikinci sayi = " << b << endl;
		}
	}
	else
		cout << "\nIki sayi esittir \n";
	
	
	
}