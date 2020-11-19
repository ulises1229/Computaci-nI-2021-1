#ifndef CALIFICACIONES_MATERIA_H
#define CALIFICACIONES_MATERIA_H

#include <string>
#include <vector>

#include "Alumno.h"

using namespace std;

class Materia
{
private:
  string nombre;
  vector<Alumno> alumnos;
public:
	Materia(string nom) { nombre = nom; };
	void AgregarAlumno(Alumno nuevoAlumno);
  int NumeroAlumnosAprobados();
};

#endif // !CALIFICACIONES_MATERIA_H
