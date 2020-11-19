#include <iostream>
#include <array>
#include <string>

#include "Alumno.h"
#include "Materia.h"

using namespace std;

Alumno CrearAlumno(int i, string materia);

int main ()
{
  string nombreMateria;
  cout << "Nombre de la materia: ";
  cin >> nombreMateria;

  Materia miMateria(nombreMateria);

  int numAlumnos;
  cout << "Numero alumnos: ";
  cin >> numAlumnos;

  for (int i = 0; i < numAlumnos; i++)
    miMateria.AgregarAlumno(CrearAlumno(i, nombreMateria));

  cout << "El numero de alumnos aprobados en " << nombreMateria << " es = " <<  miMateria.NumeroAlumnosAprobados() << endl;

  return 0;
}

Alumno CrearAlumno(int i, string materia)
{
  string nombre;
  float calificacion;

  cout << "Nombre del alumno " << i << ": ";
  cin >> nombre;
  cout << "Calificacion en " << materia << ": ";
  cin >> calificacion;
  Alumno miAlumno(nombre, calificacion);
  return miAlumno;
}
