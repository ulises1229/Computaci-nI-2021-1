#include <iostream>
#include <string>

#include "calificaciones.h"

int main() {

    string curso = "Matemáticas";

    // Definición del objeto
    Calificaciones objMath;

    //objMath.imprimirMateria(curso);

    objMath.setCurso(curso);

    string curso2 = objMath.getCurso();

    cout << "El nómbre del curso es: " << curso2 << endl;

    // Definición de un segundo objeto
    Calificaciones objEsp;
    objEsp.setCurso("Español");
    cout << "El nombre de curso asociado a objEsp es: " << objEsp.getCurso() << endl;



    return 0;
}

