//
// Created by Ulises Olivares on 26/10/20.
//

#ifndef CLASES_CALIFICACIONES_H
#define CLASES_CALIFICACIONES_H

#include <string>
#include <iostream>

using namespace std;

class Calificaciones{

public:
    void imprimirMateria(string materia);
    void setCurso(string nombreCurso);
    string getCurso();

private:
    string curso = "";
};


#endif //CLASES_CALIFICACIONES_H
