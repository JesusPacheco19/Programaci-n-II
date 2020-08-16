#pragma once
class Virus
{
public:
	Virus(bool fiebre = 0,
		bool tos = 0,
		bool disnea = 0) {


		this->fiebre = fiebre;
		this->tos = tos;
		this->disnea = disnea;
	}
	~Virus() {

	}
protected:
	bool fiebre;
	bool tos;
	bool disnea;

	void setFiebre(bool  x) { fiebre = x; }
	void setTos(bool x) { tos = x; }
	void setDisnea(bool x) { disnea = x; }

	bool getFiebre() { return fiebre; }
	bool getTos() { return tos; }
	bool getDisnea() { return disnea; }
	
};

