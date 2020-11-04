// Author: Ulises Olivares
// uolivaes@unam.mx

#include <iostream>
#include <array>
#include <time.h>
#include <stdlib.h>

#define N 10

using namespace std;

// Declaración de métodos
void inicializarArreglo(array<int, N> &A);
void imprimirArreglo(array<int, N> A);


int main() {
    //definición de un arreglo 1D usamos la variable N predefinida la inicio del programa
    array<int, N> A;

    // Inicializar arreglo
    inicializarArreglo(A);

    // Imprimir arreglo
    imprimirArreglo(A);

    return 0;
}

void inicializarArreglo(array<int, N> &A){
    for(int i = 0; i<A.size(); i++){
        // Inicializar arreglo con números del 1 al 100
        A[i] = (rand() % 100) + 1;
    }
}

// Paso de parametros por referencia
void imprimirArreglo(array<int, N> A){
    cout<< "Los elementos del arreglo son: "<< endl;
    for(int i = 0; i<A.size(); i++){
        cout<< A[i] << " ";
    }
    cout<< endl;
}