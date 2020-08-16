#pragma once
#include"Virus.h"
class Mers :public Virus
{
public:
	Mers(bool fiebre = 0,
		bool tos = 0,
		bool disnea = 0,bool gastro=0) :Virus(fiebre, tos, disnea) {
		this->gastro = gastro;


	}
	void setGatro(bool x) { gastro= x; }
	bool getGastro() { return  gastro; }

	bool Resultado() {
		if (fiebre == 1 && tos == 1 && disnea == 1 && gastro== 1)
			return true;
		else return false;
	}
	void ReportePositivo() {
		cout << "el virus <Sars>					  " << endl;
		cout << "<Debe aislarse por precaución>:SI  " << endl;
		cout << "<Es paciente de alto riesgo>:Si" << endl;
	}
	void ReporteNegatico() {
		cout << "el virus <Sars> " << endl;
		cout << "<Debe aislarse por precaución>:NO  " << endl;
		cout << "<Es paciente de alto riesgo>:No" << endl;
	}
private:
	bool gastro;


};

