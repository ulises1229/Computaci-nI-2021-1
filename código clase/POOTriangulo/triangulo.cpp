//
// Created by Ulises Olivares on 26/10/20.
//

#include "triangulo.h"

void Triangulo::setAltura(float altura){
    h = altura;
}
float Triangulo::getAltura(){
    return h;
}

void Triangulo::setBase(float base){
    b = base;
}
float Triangulo::getBase(){
    return b;
}

float Triangulo::calcularArea(){
    return (b * h) /2;
}

