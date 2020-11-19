#include "Materia.h"

void Materia::AgregarAlumno(Alumno nuevoAlumno)
{
  alumnos.push_back(nuevoAlumno);
}

int Materia::NumeroAlumnosAprobados()
{
  int aprobados = 0;
  for (int i = 0, numAlumnos = alumnos.size(); i < numAlumnos; i++)
  {
    if (alumnos[i].GetCalificacion() > 7)
      aprobados += 1;
  }
  return aprobados;
}
