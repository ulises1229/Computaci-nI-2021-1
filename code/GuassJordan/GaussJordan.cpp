//
// Created by Ulises Olivares on 05/11/20.
//

#include "GaussJordan.h"

/*
 * Este es el constructor de la clase
 */
GaussJordan::GaussJordan(float m[][4] , const int f, const int c) {
    filas = f;
    columnas = c;
    memcpy(M, m, sizeof(M));
    cout << "constructor" << endl;
}

/*
 * Este método busca un pivote != 0 en la matriz
 */
int GaussJordan::buscarPivote(int col){
    int indiceFila = -1;
    // Valor mínimo para un flotante en en C++
    float maxNum = numeric_limits<float>::min();
    for(int i = col + 1; i < filas; i++){
        if(M[i][col] > maxNum && M[i][col] != 0){
            indiceFila = i;
            maxNum = M[i][col];
        }
    }
    return indiceFila;
}

/*
 * Este método intercambia filas, útil para realizar el pivoteo
 */
void GaussJordan::intercambiarFilas(int f1, int f2) {
    for(int i = 0; i< columnas; i++) {
        float temp = M[f1][i];
        M[f1][i] = M[f2][i];
        M[f2][i] = temp;
    }
}

void GaussJordan::imprimirMatriz() {
    for(int i=0; i<filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout<< M[i][j] << "\t";
        }
        cout<<endl;
    }
}

/*
 * Método para multiplicar una fila por un escalar
 */
void GaussJordan::multiplicarFila(float k, int fila, int colInicial){
    for(int i =colInicial; i < columnas; i++)
        M[fila][i] *= k;
}

void GaussJordan::dividirFila(float piv, int fila, int colInicial){
    for(int i =colInicial; i < columnas; i++)
        M[fila][i] /= piv;
}

/*
 * Método para restar dos filas de una matriz
 */
void GaussJordan::restarFilas(int f1, int f2, int colInicial){
    for(int i = colInicial; i < columnas; i++){
        M[f1][i] = - M[f1][i] + M[f2][i];
    }
}



/*
 * Método principal para realizar la eliminación de Gauss jordan
 */
void GaussJordan::eliminacionGaussJ() {
    cout<<"Matriz original" << endl;
    imprimirMatriz();
    //int contIntercambios = 0;
    for(int i = 0; i < filas; i++){
        float pivote = M[i][i];
        if(pivote == 0){
            int indiceNuevoPivote = buscarPivote(i);
            if(indiceNuevoPivote == -1) {
                cout << "El sistema no tiene solución..." << endl;
                exit(0);
            }
            else{
                intercambiarFilas(indiceNuevoPivote, i);
                //contIntercambios ++;
                cout << "Después del pivoteo \n " << endl;
                imprimirMatriz();
                pivote = M[i][i];   // Actualizar pivote
            }
        }
        dividirFila(pivote, i, i);

        // Iterara sobre el resto de las filas para eliminar elementos
        for( int j = i+1; j<filas; j++ ){
            //Validar la división entre 0
            if(M[j][i] != 0){
                float k = M[i][i] / M[j][i];    //Pivote entre elemento debajo
                multiplicarFila(k, j, i);       // Multiplicar fila por escalar k
                restarFilas(j, i, i);           // Restar filas para generar cero debajo del pivote
            }
        }

        cout<< "Matriz después de la eliminación " <<  i + 1 << endl;
        imprimirMatriz();
    }

    cout<< "Matriz final ..." << endl;
    imprimirMatriz();

    cout<<"El valor de la última variable es: " << M[filas-1][columnas-1] / M[filas-1][columnas-2]<< endl;
}


