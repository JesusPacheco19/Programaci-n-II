#include<iostream>
#include "Registro.h"
#include "ControlRegistros.h"
int main() {
	ControlRegistros*control = new ControlRegistros();
	int tipo;
	cout << ".:ROBOT VIRIDAE";
	do {
		cout << "	MENU" << endl;
		cout << "	== == == == == ==         " << endl;
		cout << "	[1] SARS - CoV			  " << endl;
		cout << "	[2] MERS - CoV			  " << endl;
		cout << "	[3] COVID - 19			  " << endl;
		cout << "	[4] REPORTE TOTAL		  " << endl;
		cout << "	[5] SALIR				  " << endl;
		cout << "	Para Diagnosticar		  " << endl;
		cout << "	Elija un tipo de virus->_ " << endl;
system("pause");
	return(0);
	//EL PROGRAMA FUNCIONAAAAA!!! :D
}