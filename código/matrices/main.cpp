#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

#define N 10

// Definición de funciones
void imprimirMatriz(array<array<int, 5>,5> A);

// Variables globales constantes para filas y cols
const int f = 5;
const int c = 5;

int main() {

    array<array<int, c>, f> A = {};
    array<array<int, c>, f> B = {};

    srand((int) time(0));

    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            A[i][j] = (rand() % 10) ;
            B[i][j] = (rand() % 10) ;
        }
    }

    cout << "Primer Matriz" << endl;
    imprimirMatriz(A);

    cout << "Segunda Matriz" << endl;
    imprimirMatriz(B);

    // Calculando la traza de la primer matriz

    int traza = 0;
    for(int i = 0; i<A.size(); i++)
        traza += A[i][i];

    cout <<"La traza de la matriz A es: " << traza << endl;





    //std::cout << "Hello, World!" << std::endl;
    return 0;
}

void imprimirMatriz(array<array<int, 5>,5> A){
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}
