#include <iostream>
using namespace std;

int main () {
	float a;
	float b;
	float c;
	float X1;
	float X2;
	float Raiz; 
	cout << "Introduzca la variable a: ";
	cin >> a;
	cout << "Introduzca la variable b: ";
	cin >> b; 
	cout << "Introduzca la variable c: "; 
	cin >> c; 
	Raiz= sqrt (pow (b,2)-4*a*c);
	X1=(-b + Raiz )/(2*a);
	X2=(-b - Raiz )/ (2*a);
	cout << " Las soluciones son: " << X1<< "y" <<X2<< endl; 
	return 0;



		
	}




