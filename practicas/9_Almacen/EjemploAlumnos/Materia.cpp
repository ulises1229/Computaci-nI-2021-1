#include "Materia.h"

void Materia::AgregarAlumno(string* nuevoAlumno, float calificacion)
{
  alumnos.push_back(nuevoAlumno);
  calificaciones.push_back(calificacion);
}

float Materia::CalificacionAlumno(string* alumnoPtr)
{
  for (int i = 0, n = alumnos.size(); i < n; i++)
  {
      if (alumnos[i] == alumnoPtr)
        return calificaciones[i];
  }
  return -1;
}
