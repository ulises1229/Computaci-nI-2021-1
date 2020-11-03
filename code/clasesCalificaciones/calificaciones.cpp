//
// Created by Ulises Olivares on 26/10/20.
//

#include "calificaciones.h"

using namespace std;

void Calificaciones::imprimirMateria(string materia) {
    cout << "La materia es: " << materia << endl;
}

void Calificaciones::setCurso(string nombreCurso) {
    curso = nombreCurso;
}

string Calificaciones::getCurso() {
    return curso;
}