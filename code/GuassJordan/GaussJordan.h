//
// Created by Ulises Olivares on 05/11/20.
//

#ifndef GUASSJORDAN_GAUSSJORDAN_H
#define GUASSJORDAN_GAUSSJORDAN_H

#include <limits>
#include <iostream>


using namespace std;

class GaussJordan {

public:
    GaussJordan(float m[][4], const int f, const int c);

    void eliminacionGaussJ();
    int buscarPivote(int col);
    void intercambiarFilas(int f1, int f2);
    void imprimirMatriz();
    void multiplicarFila(float k, int fila, int colInicial);
    void restarFilas(int f1, int f2, int colInicial);
    void dividirFila(float piv, int fila, int colInicial);

private:
    int filas, columnas;
    float M[3][4];
};


#endif //GUASSJORDAN_GAUSSJORDAN_H
