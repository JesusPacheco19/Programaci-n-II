#pragma once
#include "Paciente.h"
#include "Sars.h"
#include "Mers.h"
#include "Covid19.h"
#include <iostream>
#include <vector>
#include<string>
using namespace std;
class Registro
{
public:
	Registro(int n){
		this->n = n;
		switch (n)
		{
		case 1:
			cout << "Ingrese nombre del paciente:";
			cin >> nombre;
			cout << "ingrese apellido";
			cin >> apellido;
			bool escalofrios;
			bool dolorMuscular;
			bool dolorCabeza;
			p = new Paciente(nombre, apellido);
			cout << "Tiene fiebre?: 1[SI] 0[NO:";
			cin >> fiebre;
			cout << "Tiene tos?:1[SI] 0[NO:";
			cin >> tos;
			cout << "Tiene disnea?:1[SI] 0[NO:";
			cin >> disnea;
			cout << "Tiene escalofrios?[1]Si 0[NO]:";
			cin >> escalofrios;
			cout << "Tiene dolores Musculares)[1]Si 0[No]";
			cin >> dolorMuscular;
			cout << "Tiene dolor de cabeza? [1]Si   0[NO]";
			cin >> dolorCabeza;
			s = new Sars(fiebre,tos,disnea,escalofrios, dolorMuscular, dolorCabeza);
			cont = 1;
			if (s->Resultado() == true) {
				cout << p->toString() << endl;
				s->ReportePositivo();
			}
			else {
				cout << p->toString() << endl;
				s->ReporteNegatico();
			}
			break;


		case 2:
			bool gastro;
			cout << "Ingrese nombre del paciente:";
			cin >> nombre;
			cout << "ingrese apellido";
			cin >> apellido;
			p = new Paciente(nombre, apellido);
			cout << "Tiene fiebre?: 1[SI] 0[NO:";
			cin >> fiebre;
			cout << "Tiene tos?:1[SI] 0[NO:";
			cin >> tos;
			cout << "Tiene disnea?:1[SI] 0[NO:";
			cin >> disnea;
			cout << "Tiene gastroindestinales?:1[SI] 0[NO:";
			cin >> gastro;
			m = new Mers(fiebre, tos, disnea, gastro);
			cont = 2;
			if (m->Resultado() == true) {
				cout << p->toString() << endl;
				m->ReportePositivo();
			}
			else {
				m->ReporteNegatico();
			}
			break;
		case 3:
			bool lingopenia;
			bool neumonia;
			bool  edad;
			cout << "Ingrese nombre del paciente:";
			cin >> nombre;
			cout << "ingrese apellido:";
			cin >> apellido;
			p = new Paciente(nombre, apellido);
			cout << "Tiene fiebre?: 1[SI] 0[NO:";
			cin >> fiebre;
			cout << "Tiene tos?:1[SI] 0[NO:";
			cin >> tos;
			cout << "Tiene disnea?:1[SI] 0[NO:";
			cin >> disnea;
			cout << "Tiene Linfopenia?:1[SI] 0[NO:";
			cin >> lingopenia;
			cout << "Tiene Neumonia?:1[SI] 0[NO:";
			cin >> neumonia;
			cout << "Es mayor de 60 anios?:";
			cin >> edad;
			c = new Covid19(fiebre, tos, disnea, lingopenia, neumonia, edad);
			cont = 3;
			if (c->ResultadoBajo() == true) {
				cout << p->toString() << endl;
				c->ReportePositivoBajo();
			}
			else {
				if (c->ResultadoAlto() == true) {
					cout << p->toString() << endl;
					c->ReportePositivo();
				}
				else
					if (c->ResultadoAlto() == false) {
						cout << p->toString() << endl;
						c->ReporteNegatico();
					}
			}
	
			break;
		case 4:


		case 5:

			break;
		}
	}
	~Registro(){
		p = nullptr;
		s = nullptr;
		c = nullptr;
		m = nullptr;

	}
	int getCont() {
		return cont;
	}

private:
	int cont;
	string nombre;
	string apellido;
	string edad;
	Paciente *p;
	Sars *s;
	Covid19 *c;
	Mers *m;
	int n;
	bool fiebre;
	bool tos;
	bool disnea;
	
};

