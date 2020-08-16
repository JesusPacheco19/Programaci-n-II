#pragma once
#include<iostream>
#include<string >
using namespace std;
class Paciente
{
protected:
	string nombre;
	string apellido;

public:
	Paciente(string nombre, string apellido) {

		this->nombre = nombre;
		this->apellido = apellido;
	}
	~Paciente() {
	}
	void setNombre(string x) { nombre = x; }
	void setApellido(string x) { apellido = x; }
	string  getNombre() { return nombre; }
	string  getApellido() { return apellido; }

	string toString(){
		string s("Nombre:" + nombre + "\n" + "Apellido:" + apellido);
		return s;
	}
};