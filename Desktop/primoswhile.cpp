#include <iostream>
using namespace std; 

int main () {
	//Declaracion de variables 
	int numero; 
	int divisor=2; 
	bool primo=true; 
	
	//Pedir al usuario las entradas
	cout << "Ingrese un número entero positivo: "<< endl; 
	cin >> numero; 

	//Comprobar si es primo 
	while (divisor <= numero /2) {
		if (numero % divisor ==0) {
			primo=false; 
		}
	}
	//Mostramos el resultado 
	if (primo && numero > 1) {
		cout << "El número " << numero << " es primo. " << endl; 
	} else {
		cout << "El número " << numero << " no es primo. " << endl; 
	}
}