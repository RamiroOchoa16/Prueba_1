#include "Datos.h"
#include <string>
#include <iostream>

using namespace std;
using namespace Dates;

//Constructores y Destructores

Datos::Datos(string name, string gen, int old) :nombre{ name }, genero{ gen }, edad{ old }
{
	cout << "Datos creados"  << endl;
}

Datos::~Datos()
{
	cout << "Datos Destruidos\n" << endl;
}

//gets and sets
//nombre

void Datos::setNombre(string name)
{
	nombre = name;
}

string Datos::getNombre()
{
	return nombre;
}

//genero

void Datos::setGenero(string gen)
{
	genero = gen;
}

string Datos::getGenero()
{
	return genero;
}

//edad

void Datos::setEdad(int old)
{
	edad = old;
}


int Datos::getEdad()
{
	return edad;
}

//operaciones

string Datos::getDatos()
{
	string datos;

	datos = edad + "" + genero + "" + nombre;
	return datos;
}
