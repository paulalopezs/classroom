#include <iostream>
using namespace std; 

int main () {
	//Declaramos las variables 
	double intervalo_a; 
	double intervalo_b; 
	int numero_x; 
	int i = intervalo_a; 
	
	

	//Pedimos al usuario que introduzca las entradas
	cout << "Indique el primer número desde donde quiere que empiece su intervalo: " << endl; 
	cin >> intervalo_a; 
	cout << "Indique el segundo número hasta donde quiere que termine su intervalo: " << endl; 
	cin >> intervalo_b; 
	cout << "Indique el número X del que quiere hallar la lista de divisores: " << endl; 
	cin >> numero_x; 

	//Validamos los intervalos
	if (intervalo_a>intervalo_b) {
		cout << "Error. El primer numero del intervalo debe ser menor o igual que el segundo intervalo. " << endl; 
		return 1; 
	}
	
	//Calculamos la condicion 
	while ( i <= intervalo_b) {
		if (numero_x % i ==0) {
		}
		i=i+1 ; 
	} 
	//Salida
	cout << "Los divisores de " << numero_x << "en el intervalo elegido son: " << i << endl; 
}