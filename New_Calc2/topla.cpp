#include "topla.h"
#include <iostream>

// todo(dogub): topla ve diðer çoklanacak aritmetik iþlemleri için her tipin adýnda print eden komutlar yazýlmalý
// todo(dogub): topla, bol, diger metodlar iki parametre yerine bu iki parametreyi tutan bir struct almalý 
//				ve bu struct degerler const & olarak metodlara gönderilmeli



double topla(double x, double y) {
	std::cout << "topla(double) cagrildi" << std::endl;
	return x + y;
}



