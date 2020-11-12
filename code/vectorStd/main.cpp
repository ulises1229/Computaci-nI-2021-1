#include <iostream>
#include <vector>

using namespace std;

template<typename  T>
void imprimirVector(vector<T> A);

int main() {

    vector< int > enteros1( 7 ); // vector de 7 elementos< int >
    vector< int > enteros2( 10 ); // vector de 10 elementos< int >
    cout << "El tamanio del vector enteros1 es " << enteros1.size() << endl;
    cout << "Vector despues de la inicializacion:" << endl;

    imprimirVector(enteros1);

    enteros1.push_back(1);
    enteros1.push_back(2);

    for(int i = 0; 9000; i++){
        enteros1.push_back(i);
    }


    /*enteros1.insert(enteros1.begin()+1,3,4);

    imprimirVector(enteros1);

    cout << "Vector despues de agregar elementos:" << endl;
    imprimirVector(enteros1);

    // Generar una copia
    vector< int > enteros3( enteros1 );
    cout << "Nuevo vector" << endl;
    imprimirVector(enteros1);

    if ( enteros1 != enteros3 )
        cout << "enteros1 y enteros2 no son iguales" << endl;
    else
        cout << "enteros1 y enteros2 son iguales" << endl;

    enteros1[ 5 ] = 1000;
    cout << "enteros1:" << endl;
    imprimirVector( enteros1 );*/

    return 0;
}

template<typename  T>
void imprimirVector(vector<T> A){
    for(int i =0; i<A.size(); i++)
        cout<< A[i] << " ";
    cout << endl;
}