#ifndef CALIFICACIONES_MATERIA_H
#define CALIFICACIONES_MATERIA_H

#include <string>
#include <vector>

using namespace std;

class Materia
{
private:
  string nombre;
  vector<string*> alumnos;
  vector<float> calificaciones;
public:
  Materia() { nombre = ""; }
	Materia(string nom) { nombre = nom; };
  string ObtenerNombre() { return nombre; }
	void AgregarAlumno(string* nuevoAlumno, float calificacion);
  float CalificacionAlumno(string* alumno);
};

#endif // !CALIFICACIONES_MATERIA_H
