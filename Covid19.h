#pragma once
#include"Virus.h"
#include<string>
using namespace std;
class Covid19 :public Virus
{
public:
	Covid19(bool fiebre = 0,
		bool tos = 0,
		bool disnea = 0, bool lingopenia=0,
	bool neumonia=0,
	bool  edad=0) :Virus(fiebre, tos, disnea) {

		this->lingopenia = lingopenia;
		this->neumonia = neumonia;
		this->edad = edad;


	}
	void setLingopenia(bool x){lingopenia =x;}
	void setNeumonia  (bool x){ neumonia=x;}
	void setEdad	  (bool x){ edad=x;}

	bool getLingopenia() {return  lingopenia; }
	bool getNeumonia() { return neumonia ; }
	bool getEdad() { return edad; }
	~Covid19() {}
	bool ResultadoAlto() {
		if (fiebre == 1 && tos == 1 && disnea == 1 && lingopenia ==1 && neumonia == 1&&edad==1)
		return true;
		else return false;
	}
	bool ResultadoBajo() {
		if (fiebre == 1 && tos == 1 && disnea == 1 && lingopenia == 1 && neumonia == 1&&edad==0)
			return true;
		else return false;
	}

	void ReportePositivo(){
			cout<<"el virus <Covid19>					  "<<endl;
			cout<<"<Debe aislarse por precaución>:SI  "<<endl;
			cout<<"<Es paciente de alto riesgo>:Si"<<endl;
	}
	void ReportePositivoBajo() {
		cout << "el virus <Covid19> " << endl;
		cout << "<Debe aislarse por precaución>:SI  " << endl;
		cout << "<Es paciente de alto riesgo>:No" << endl;
	}
	void ReporteNegatico() {
		cout << "el virus <Covid19> " << endl;
		cout << "<Debe aislarse por precaución>:NO  " << endl;
		cout << "<Es paciente de alto riesgo>:No" << endl;
	}

private:
	bool lingopenia  ;
	bool neumonia;
	bool  edad;

};

