#pragma once
#include"Registro.h"
#include <iostream>
#include <vector>
#include<string>
using namespace std;
class ControlRegistros
{
public:
	ControlRegistros() {	
	}
	void añadirRegistro(Registro *aux) {
		control.push_back(aux);
		if (aux->getCont() == 1) contS++;
		else {
			if (aux->getCont() == 2)contM++;
			else if (aux->getCont() == 3)contC++;
		}
	}
	~ControlRegistros(){
		for(int i = 0; i < control.size();++i) {
			control.erase(control.begin() + i);
		}
	}
	void Reporte(){                                        
		cout<<"  ROBOT_VIRIDAE"<<endl;
		cout<<"Reporte total  "<<endl;
		cout<<"Nro.infectados: "<<contS+contM+contC<<endl;
		cout<<"SARS - CoV <"<<contS<<">"<<endl;
		cout<<"MERS - CoV <"<<contM<<">"<<endl;
		cout<<"COVID - 19 <"<<contC<<">"<<endl;
	}
private:
	short contS=0;
	short contM=0;
	short contC=0;

	vector<Registro*>control;
};

