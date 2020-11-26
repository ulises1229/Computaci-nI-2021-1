#include <iostream>
#include <array>
#include <string>

#include "Materia.h"

using namespace std;

Materia CrearMateria(int i);

int main ()
{
  const int numMaterias = 2, numAlumnos = 3;
  array <Materia, numMaterias> misMaterias;
  array <string, numAlumnos> todosAlumnos;

  for(int i = 0; i < numMaterias; i++)
      misMaterias[i] = CrearMateria(i);

  int decision = 0;
  float calificacion = 0;
  for (int i = 0; i < numAlumnos; i++)
  {
      string nuevoAlumno;
      string* nuevoAlumnoPtr = nullptr;
      cout << "Nombre alumno " << i << ": ";
      cin >> nuevoAlumno;
      todosAlumnos[i] = nuevoAlumno;
      nuevoAlumnoPtr = &todosAlumnos[i];
      for (int j = 0; j < numMaterias; j++)
      {
          cout << "El alumno " << nuevoAlumno << " esta tomando la materia de " << misMaterias[j].ObtenerNombre() << " (1 si, 0 no): ";
          cin >> decision;
          if (decision)
          {
              do {
                  cout << "Que calificacion obtuvo (del 0 al 10): ";
                  cin >> calificacion;
              } while(calificacion > 10 || calificacion < 0);
              misMaterias[j].AgregarAlumno(nuevoAlumnoPtr, calificacion);
          }
      }
  }

  for (int i = 0; i < numAlumnos; i++)
  {
      cout << endl << "Las calificaciones de " << todosAlumnos[i] << " son" << endl;
      cout << "Materia\tCalificacion" << endl;
      for (int j = 0; j < numMaterias; j++)
      {
        calificacion = misMaterias[j].CalificacionAlumno(&(todosAlumnos[i]));
        if (calificacion != -1)
            cout << misMaterias[j].ObtenerNombre() << '\t' << calificacion << endl;
      }
  }
  return 0;
}

Materia CrearMateria(int i)
{
  string nombreMateria;
  cout << "Nombre de la materia: " << i << ": ";
  cin >> nombreMateria;
  Materia nuevaMateria(nombreMateria);
  return nuevaMateria;
}
