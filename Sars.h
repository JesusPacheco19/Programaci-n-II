#pragma once
#include"Virus.h"
class Sars:public Virus
{
public:
	Sars(bool fiebre = 0,
		bool tos = 0,
		bool disnea = 0, bool escalofrios = 0,
		bool dolorMuscular = 0,
		bool dolorCabeza = 0,
		bool diarrea = 0) :Virus(fiebre, tos, disnea) {
		this->escalofrios = escalofrios;
		this->dolorMuscular = dolorMuscular;
		this->dolorCabeza = dolorCabeza;
	}
		void setEscalofrios   (bool x){  escalofrios =x;}
		void setDolorMuscular (bool x){  dolorMuscular =x;}
		void setDolorCabeza	  (bool x){  dolorCabeza =x;}

		bool getEscalofrios() { return escalofrios; }
		bool getDolorMuscular() { return dolorMuscular; }
		bool getDolorCabeza() { return dolorCabeza; }

		bool Resultado() {
			if (fiebre == 1 && tos == 1 && disnea == 1 && escalofrios == 1 && dolorMuscular == 1&&dolorCabeza==1)
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

	~Sars() {}


private:
	bool escalofrios;
	bool dolorMuscular;
	bool dolorCabeza;
	

};

