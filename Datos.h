#pragma once

#include <string>

using namespace std;

namespace Dates
{
	class Datos
	{
	private:
		string nombre;
		string genero;
		int edad;

	public:
		//const y destruct
		Datos(string name = "", string gen = "", int old);
		~Datos();

		//gets and sets

		//nombre
		void setNombre(string name);
		string getNombre();

		//Genero
		void setGenero(string gen);
		string getGenero();

		//Edad
		void setEdad(int old);
		int getEdad();

 		//operaciones
		string getDatos();
	};
};

