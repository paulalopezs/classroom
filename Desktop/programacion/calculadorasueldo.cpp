
/* Programa para calcular el sueldo de un empleado 
Entradas: Salario bruto en euros
Salidas:  El salario en neto aplicando la formula: 
Salario en neto= Salario en bruto * IRPF */
#include <iostream>
using namespace std; 
int main () {
	const float IRPF = 0.15; // guardamos el IRPF en una constante, pero expresamos en tanto por ciento
	float dias_trabajados = 0.0; // guardamos el numero de dias trabajados 
	float salario_diario = 0.0; // guardamos el salario diario
	float salario_bruto = 0.0; //guardamos el salario bruto
	float salario_neto = 0.0; // guardamos el salario neto
	float retencion = 0.0;

	//Entradas del sistema 
	cout << "Introduzca salario en bruto:" << endl; 
	cout << " Introccuzca el numero de dias trabajados";
	cin >> dias_trabajados;
	cout << " Introduzca el numero de dias trabajados";
	cin >> salario_diario;


	//Procesamiento
	salario_bruto = dias_trabajados * salario_diario;
	retencion = salario_bruto * IRPF;
	salario_neto = salario_bruto - retencion;

	//Salida del sistema
	cout << "El salario bruto es:" << salario_bruto << endl;
	cout << "El salario neto es: " << salario_neto << endl;
	cout << "La retencion es: " << retencion << endl;
	cout << "Bye: " << endl; 
	
}