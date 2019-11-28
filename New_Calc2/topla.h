#pragma once

// birdi sýnýfýnýn yaratýlmasý parametrýk parametrelý constructor 
//padding
//des -const 



struct str {
	str() : a(0) , b(0),da(0), db(0), op(' ')
	{
		
	}
	int a;
	int b;
	double da;
	double db;
	char op;
	
};
double topla(double x, double y);



// char týpýnde  topla metod overload u  asagýda yer alan char lýstesý ýcerýsýnde circular dön sonuc yazdýr z+b=
// gibi

