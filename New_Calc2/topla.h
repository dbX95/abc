#pragma once

// birdi s�n�f�n�n yarat�lmas� parametr�k parametrel� constructor 
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



// char t�p�nde  topla metod overload u  asag�da yer alan char l�stes� �cer�s�nde circular d�n sonuc yazd�r z+b=
// gibi

